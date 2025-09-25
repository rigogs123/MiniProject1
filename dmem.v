//implement dmem here

module dmem (
    input wire [3:0] addr,
    output reg [7:0] data_out,
    input wire clk
);

    // Declare a memory array
    reg [7:0] memory_array [0:15]; // 16 locations, each 8 bits wide

    // Initialize memory from a file using $readmemh
    initial begin
        $readmemh("rom_data.mem", memory_array);
        // Optional: Display memory contents for verification
        for (integer i = 0; i < 16; i = i + 1) begin
            $display("Memory[%0d]: %h", i, memory_array[i]);
        end
    end

    // Synchronous read operation
    always @(posedge clk) begin
        data_out <= memory_array[addr];
    end

endmodule