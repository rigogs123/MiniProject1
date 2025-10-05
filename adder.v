//simple adder used for PC+4 operations
//not part of ALU, so it used + operand
/* verilator lint_off TIMESCALEMOD */
module adder (
    input wire [31:0] in1,
    input wire [31:0] in2,
    output wire [31:0] out
);
    assign out = in1 + in2;

endmodule
/* verilator lint_on TIMESCALEMOD */