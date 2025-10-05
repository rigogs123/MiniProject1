/* verilator lint_off LATCH */
/* verilator lint_off TIMESCALEMOD */
module latch_32bit (
    input  wire [31:0] D,
    input  wire en,
    output reg  [31:0] Q
);
    initial Q = 0;
    always @(*) begin
        if (en)
            Q = D;      
  end
endmodule
/* verilator lint_on TIMESCALEMOD */
/* verilator lint_on LATCH */