//This module implements a 32 bit register 

module register_32bit (
    input wire [31:0] D,
    input wire clk,
    output wire [31:0] Q
);
    reg [31:0] data;
    initial data = 0;
    assign Q = data;

    always @(posedge clk) begin
        data <= D;
    end
endmodule