`timescale 1ns/1ps
`include "opcodes.vh"

module tb_alu;

  // DUT I/O
  reg  [31:0] input1, input2;
  reg  [3:0]  alu_sel;
  wire [31:0] out;
  wire        over, under;

  // Instantiate DUT
  alu dut (
    .input1(input1),
    .input2(input2),
    .alu_sel(alu_sel),
    .out(out),
    .over(over),
    .under(under)
  );

  // Pretty-print helper
  task show;
    input [255*8:1] label; // string literal
  begin
    #1; // settle combinational
    $display("%0s | sel=%0d  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b",
             label, alu_sel,
             input1, $signed(input1),
             input2, $signed(input2),
             out,    $signed(out),
             over, under);
  end
  endtask

  // Run one vector
  task run_vec;
    input [3:0]  sel;
    input [31:0] a, b;
    input [255*8:1] label;
  begin
    alu_sel = sel;
    input1  = a;
    input2  = b;
    show(label);
  end
  endtask

  initial begin
    // Optional VCD
    $dumpfile("alu_tb.vcd");
    $dumpvars(0, tb_alu);

    $display("=== ALU demo run ===");

    // ---------- ADD ----------
    run_vec(`ADD, 32'h0000_0001, 32'h0000_0002, "ADD 1 + 2");
    run_vec(`ADD, 32'h7FFF_FFFF, 32'h0000_0001, "ADD overflow +");
    run_vec(`ADD, 32'h8000_0000, 32'h8000_0000, "ADD overflow -");

    // ---------- SUB (a - b) ----------
    run_vec(`SUB, 32'h0000_0005, 32'h0000_0003, "SUB 5 - 3");
    run_vec(`SUB, 32'h8000_0000, 32'h7FFF_FFFF, "SUB overflow -");
    run_vec(`SUB, 32'h7FFF_FFFF, 32'h8000_0000, "SUB overflow +");

    // ---------- MUL ----------
    run_vec(`MUL, 32'h0000_0003, 32'h0000_0007, "MUL 3 * 7");
    run_vec(`MUL, 32'h4000_0000, 32'h0000_0004, "MUL overflow +");
    run_vec(`MUL, -32'sd300000000, 32'sd30,     "MUL overflow -");

    // ---------- LOGIC ----------
    run_vec(`AND, 32'hF0F0_F0F0, 32'h0F0F_0F0F, "AND");
    run_vec(`OR,  32'hF0F0_0000, 32'h00F0_0F0F, "OR");
    run_vec(`XOR, 32'hAAAA_AAAA, 32'h5555_5555, "XOR");
    run_vec(`NOT, 32'h0000_00FF, 32'hDEAD_BEEF, "NOT (B ignored)");

    // ---------- COMPARES (signed) ----------
    run_vec(`EQ,   32'd5,  32'd5,  "EQ");
    run_vec(`NEQ,  32'd5,  32'd6,  "NEQ");
    run_vec(`LT,  -32'sd1, 32'sd1, "LT  -1 < 1");
    run_vec(`LTE, -32'sd1, -32'sd1,"LTE -1 <= -1");
    run_vec(`GT,   32'sd7, -32'sd2,"GT   7 > -2");
    run_vec(`GTE,  32'sd7,  32'sd7,"GTE  7 >= 7");

    $display("=== Done ===");
    $finish;
  end

endmodule
