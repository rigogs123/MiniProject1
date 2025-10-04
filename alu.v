/*Here, the ALU will be implemented.
Implement an ALU that covers the below operations, where alu_sel will equal one
of these instructions. ADD, SUB, and MUL should assert overflow or underflow if it happens.
The module does not rely on clock. ADD, SUB, and MUL must use 2's complement arithmetic.
ADD and SUB must use bitwise arithmetic, cannot use (+) or (-) operator.

REMINDER OF DEFINITIONS:
`define ADD 4'b0000
`define SUB 4'b0001
`define MUL 4'b0010
`define AND 4'b0011
`define OR  4'b0100
`define XOR 4'b0101
`define NOT 4'b0110
`define EQ  4'b0111
`define NEQ 4'b1000
`define LT  4'b1001
`define LTE 4'b1010
`define GT  4'b1011
`define GTE 4'b1100
*/
/* verilator lint_off TIMESCALEMOD */
`include "opcodes.vh"

module alu (
    input wire [31:0] input1,
    input wire [31:0] input2,
    input wire [3:0]  alu_sel,
    output reg [31:0] out,
    output reg        over,   // positive overflow flag
    output reg        under   // negative overflow flag
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

            // -----------------------
            // ADD using bitwise logic
            // -----------------------
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

                // Signed overflow with direction
                if ((a[31] == 1'b0) && (b[31] == 1'b0) && (out[31] == 1'b1)) begin
                    // + + -> -  (positive overflow)
                    over  = 1'b1;
                end
                else if ((a[31] == 1'b1) && (b[31] == 1'b1) && (out[31] == 1'b0)) begin
                    // - - -> +  (negative overflow)
                    under = 1'b1;
                end
            end

            // -----------------------
            // SUB using bitwise logic
            // -----------------------
            `SUB: begin
                // Two's complement of b
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

                // Now add a + (~b + 1)
                x = a;
                y = b;
                while (y != 0) begin
                    carry = x & y;
                    x = x ^ y;
                    y = carry << 1;
                end
                diff = x;
                out = diff;

                // Signed overflow with direction for a - input2
                // Overflow occurs when a and input2 have different signs
                // and result sign differs from a's sign.
                if ((a[31] == 1'b0) && (input2[31] == 1'b1) && (out[31] == 1'b1)) begin
                    // + - -> -  (positive overflow)
                    over  = 1'b1;
                end
                else if ((a[31] == 1'b1) && (input2[31] == 1'b0) && (out[31] == 1'b0)) begin
                    // - + -> +  (negative overflow)
                    under = 1'b1;
                end
            end

            // -----------------------
            // MUL (can use *)
            // -----------------------
            `MUL: begin
                mult_result = $signed(a) * $signed(input2);
                out = mult_result[31:0];

                // Overflow if upper 32 bits ≠ sign extension of bit 31
                if (mult_result[63:32] != {32{out[31]}}) begin
                    // Determine direction from expected sign of exact product
                    // (sign(a) XOR sign(b))
                    if (a[31] ^ input2[31]) begin
                        // expected negative -> negative overflow
                        under = 1'b1;
                    end else begin
                        // expected positive -> positive overflow
                        over  = 1'b1;
                    end
                end
            end

            // -----------------------
            // Logical operations
            // -----------------------
            `AND: out = input1 & input2;
            `OR:  out = input1 | input2;
            `XOR: out = input1 ^ input2;
            `NOT: out = ~input1;

            // -----------------------
            // Comparison operations
            // -----------------------
            `EQ:  out = (input1 == input2) ? 32'd1 : 32'd0;
            `NEQ: out = (input1 != input2) ? 32'd1 : 32'd0;
            `LT:  out = ($signed(input1) <  $signed(input2)) ? 32'd1 : 32'd0;
            `LTE: out = ($signed(input1) <= $signed(input2)) ? 32'd1 : 32'd0;
            `GT:  out = ($signed(input1) >  $signed(input2)) ? 32'd1 : 32'd0;
            `GTE: out = ($signed(input1) >= $signed(input2)) ? 32'd1 : 32'd0;

            default: out = 32'd0;

        endcase
    end

endmodule
/* verilator lint_on TIMESCALEMOD */