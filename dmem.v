/* verilator lint_off TIMESCALEMOD */
`include "variables.vh"

module dmem (

    input wire clk,
    input wire write_en,
    input wire [31:0] addr,           // 32-bit byte address
    input wire [31:0] write_data,     // Word (4 bytes) to write
    output reg [31:0] read_data       // Word (4 bytes) to read
);
    // Memory array: byte-addressable
    reg [7:0] mem [0:`MEM_BYTES_DMEM-1];

    // Calculate max valid address for word-aligned access
    localparam LAST_VALID_ADDR = `MEM_BYTES_DMEM - 4;

    // Memory initialization
    initial begin
        $readmemh("DMEM_MEMORY_IN.hex", mem);
    end

    // Memory access
    always @(posedge clk) begin
        // Only allow aligned and in-bounds access
        if ((addr[1:0] == 2'b00) && (addr <= LAST_VALID_ADDR)) begin
            if (write_en) begin
                mem[addr + 0] <= write_data[7:0];
                mem[addr + 1] <= write_data[15:8];
                mem[addr + 2] <= write_data[23:16];
                mem[addr + 3] <= write_data[31:24];
            end

            read_data <= {
                mem[addr + 3],
                mem[addr + 2],
                mem[addr + 1],
                mem[addr + 0]
            };
        end else begin
            read_data <= 32'hFFFFFFFF;  // default on bad access
        end
    end

    // Optional write-back to file
    final begin
        $writememh("DMEM_MEMORY_OUT.hex", mem);
    end
endmodule

/* verilator lint_on TIMESCALEMOD */