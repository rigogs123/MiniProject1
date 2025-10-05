/* verilator lint_off TIMESCALEMOD */
module register_5bit (
    input wire [4:0] D,
    input wire clk,
    output wire [4:0] Q
);
    reg [4:0] data;
    initial data = 0;
    assign Q = data;

    always @(posedge clk) begin
        data <= D;
    end
endmodule
/* verilator lint_on TIMESCALEMOD */