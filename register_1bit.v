/* verilator lint_off TIMESCALEMOD */
module register_1bit (
    input wire D,
    input wire clk,
    output wire Q
);
    reg data;
    initial data = 0;
    assign Q = data;

    always @(posedge clk) begin
        data <= D;
    end
endmodule
/* verilator lint_on TIMESCALEMOD */