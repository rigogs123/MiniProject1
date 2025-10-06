/* verilator lint_off LATCH */
/* verilator lint_off TIMESCALEMOD */
`include "opcodes.vh"

module alu (
    input wire [31:0] input1,
    input wire [31:0] input2,
    input wire [3:0]  alu_sel,
    output reg [31:0] out,
    output reg over,
    output reg under   
);

    reg [31:0] a, b;
    reg [31:0] sum, diff;
    reg [31:0] x, y;
    reg [63:0] mult_result;
    reg [31:0] carry;

    always @(*) begin
        a = input1;
        b = input2;
        out = 32'd0;
        over = 1'b0;
        under = 1'b0;
        sum = 32'd0;
        diff = 32'd0;
        x = 32'd0;
        y = 32'd0;
        carry = 32'd0;
        mult_result = 64'd0;
        case (alu_sel)
            `ADD: begin
                x = a;
                y = b;
                while (y != 0) begin
                    carry = x & y;
                    x = x ^ y;
                    y = carry << 1;
                end
                sum = x;
                out = sum;

                if ((a[31] == 1'b0) && (b[31] == 1'b0) && (out[31] == 1'b1)) begin
                    over  = 1'b1;
                end
                else if ((a[31] == 1'b1) && (b[31] == 1'b1) && (out[31] == 1'b0)) begin
                    under = 1'b1;
                end
            end

            `SUB: begin
                y = ~b;
                carry = 32'd1;
                while (carry != 0) begin
                    x = y;
                    y = carry;
                    carry = x & y;
                    y = x ^ y;
                    carry = carry << 1;
                end
                b = y;

                x = a;
                y = b;
                while (y != 0) begin
                    carry = x & y;
                    x = x ^ y;
                    y = carry << 1;
                end
                diff = x;
                out = diff;

                if ((a[31] == 1'b0) && (input2[31] == 1'b1) && (out[31] == 1'b1)) begin
                    over  = 1'b1;
                end
                else if ((a[31] == 1'b1) && (input2[31] == 1'b0) && (out[31] == 1'b0)) begin
                    under = 1'b1;
                end
            end

            `MUL: begin
                mult_result = $signed(a) * $signed(input2);
                out = mult_result[31:0];

                if (mult_result[63:32] != {32{out[31]}}) begin
                    if (a[31] ^ input2[31]) begin
                        under = 1'b1;
                    end else begin
                        over  = 1'b1;
                    end
                end
            end
            `AND: out = input1 & input2;
            `OR:  out = input1 | input2;
            `XOR: out = input1 ^ input2;
            `NOT: out = ~input2;
            
            `EQ: out = (~| (input1 ^ input2)) ? 32'd1 : 32'd0;
            `NEQ: out = (| (input1 ^ input2)) ? 32'd1 : 32'd0;
            `LT: begin
                reg [31:0] diff;
                diff = input1 + (~input2 + 1);
                out = ((input1[31] & ~input2[31]) | (~(input1[31] ^ input2[31]) & diff[31])) ? 32'd1 : 32'd0;
            end
            `LTE: begin
                reg [31:0] diff;
                diff = input1 + (~input2 + 1);
                out = (((input1[31] & ~input2[31]) | (~(input1[31] ^ input2[31]) & diff[31])) | (~| (input1 ^ input2))) ? 32'd1 : 32'd0;
            end
            `GT: begin
                reg [31:0] diff;
                diff = input1 + (~input2 + 1);
                out = (~(((input1[31] & ~input2[31]) | (~(input1[31] ^ input2[31]) & diff[31])) | (~| (input1 ^ input2)))) ? 32'd1 : 32'd0;
            end
            `GTE: begin
                reg [31:0] diff;
                diff = input1 + (~input2 + 1);
                out = (~((input1[31] & ~input2[31]) | (~(input1[31] ^ input2[31]) & diff[31]))) ? 32'd1 : 32'd0;
            end
            default: out = 32'd0;

        endcase
    end

endmodule
/* verilator lint_on TIMESCALEMOD */
/* verilator lint_on LATCH */