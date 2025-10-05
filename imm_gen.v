//This module concatenates immediates based on the instruction type and the operation
/* verilator lint_off TIMESCALEMOD */
module imm_gen (
    input wire [4:0] a,
    input wire [4:0] b,
    input wire [10:0] c,
    input wire [1:0] imm_sel_in,
    output reg [31:0] out
);
    wire [15:0] cb   = {c, b};        // c(11) + b(5)
    wire [20:0] cba  = {c, b, a};     // c(11) + b(5) + a(5)
    always @(*) begin
        case(imm_sel_in)
            2'b00: out = 32'b0;
            2'b01: out = {cb, 16'b0};
            2'b10: out = {{16{c[10]}}, cb};
            2'b11: out = {{11{c[10]}}, cba};
            default: out = 32'b0;
        endcase
   end 
endmodule
/* verilator lint_on TIMESCALEMOD */