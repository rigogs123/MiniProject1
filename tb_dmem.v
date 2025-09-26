`timescale 1ns / 1ps
`include "variables.vh"

module tb_dmem;

    // Parameters
    //parameter MEM_BYTES = 32; // You can change this to test different sizes

    // Testbench signals
    reg clk;
    reg write_en;
    reg [31:0] addr;
    reg [31:0] write_data;
    wire [31:0] read_data;

    // Instantiate the memory module
    dmem uut (
        .clk(clk),
        .write_en(write_en),
        .addr(addr),
        .write_data(write_data),
        .read_data(read_data)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 10ns clock period
    end

    // Test sequence
    initial begin
        // Initialize signals
        write_en = 0;
        addr = 0;
        write_data = 0;

        $display("===== Starting dmem test =====");

        // Wait for memory to initialize
        #10;

        // === Read initial word from address 0x00 ===
        addr = 32'h00;
        #10;
        $display("Initial read @ 0x%08h = 0x%08h", addr, read_data);

        // === Write a word to address 0x04 ===
        addr = 32'h04;
        write_data = 32'hDEADBEEF;
        write_en = 1;
        #10;
        write_en = 0;
        $display("Wrote 0x%08h to address 0x%08h", write_data, addr);

        // === Read it back ===
        addr = 32'h04;
        #10;
        $display("Read @ 0x%08h = 0x%08h (expected 0xDEADBEEF)", addr, read_data);

        // === Try misaligned access (should return 0) ===
        addr = 32'h05;
        #10;
        $display("Misaligned read @ 0x%08h = 0x%08h (expected 0)", addr, read_data);

        // === Try out-of-bounds access (should return 0) ===
        addr = `MEM_BYTES_DMEM;  // This is just past the end
        #10;
        $display("Out-of-bounds read @ 0x%08h = 0x%08h (expected 0)", addr, read_data);

        // === Write at last valid word address ===
        addr = `MEM_BYTES_DMEM - 4;
        write_data = 32'hAABBCCDD;
        write_en = 1;
        #10;
        write_en = 0;
        $display("Wrote 0x%08h to last valid word address 0x%08h", write_data, addr);

        // === Read it back ===
        #10;
        $display("Read @ 0x%08h = 0x%08h (expected 0xAABBCCDD)", addr, read_data);

        // Finish simulation
        #20;
        $display("===== dmem test completed =====");
        $finish;
    end

endmodule
