
/* verilator lint_off TIMESCALEMOD */
`include "opcodes.vh"

module ccr_logic (
    input wire over,
    input wire under,
    input wire [31:0] alu_in,
    input wire [31:0] ccr_in,
    input wire [1:0] type_in,
    input wire [3:0] op_in,
    output reg br_out,
    output reg [31:0] ccr_out
);
    always @(*) begin
        ccr_out = ccr_in;
        ccr_out[31:9] = 23'b0;
        ccr_out[0] = (alu_in == 32'b0) ? 1'b1 : 1'b0;
        ccr_out[1] = (over) ? 1'b1 : 1'b0;
        ccr_out[2] = (under) ? 1'b1 : 1'b0;
        br_out = 1'b0;

        if (type_in == `B_TYPE) begin
            case (op_in)
                `BEQ: begin
                    br_out = ccr_in[3];
                    ccr_out[3] = 1'b0;
                end
                `BNEQ: begin
                    br_out = ccr_in[4];
                    ccr_out[4] = 1'b0;
                end
                `BLT: begin
                    br_out = ccr_in[5];
                    ccr_out[5] = 1'b0;
                end
                `BLTE: begin
                    br_out = ccr_in[6];
                    ccr_out[6] = 1'b0;
                end
                `BGT: begin
                    br_out = ccr_in[7];
                    ccr_out[7] = 1'b0;
                end
                `BGTE: begin
                    br_out = ccr_in[8];
                    ccr_out[8] = 1'b0;
                end
                default: begin
                    br_out = 1'b0;
                end
            endcase
        end else if (type_in == `R_TYPE) begin
            // For non-branch instructions, preserve bits [3:8]
            case (op_in)
                `EQ: begin
                    br_out = ccr_in[3];
                    ccr_out[3] = 1'b1;
                end
                `NEQ: begin
                    br_out = ccr_in[4];
                    ccr_out[4] = 1'b1;
                end
                `LT: begin
                    br_out = ccr_in[5];
                    ccr_out[5] = 1'b1;
                end
                `LTE: begin
                    br_out = ccr_in[6];
                    ccr_out[6] = 1'b1;
                end
                `GT: begin
                    br_out = ccr_in[7];
                    ccr_out[7] = 1'b1;
                end
                `GTE: begin
                    br_out = ccr_in[8];
                    ccr_out[8] = 1'b1;
                end
                default: begin
                    br_out = 1'b0;
                end
            endcase            
        end else begin
            ccr_out[8:3] = ccr_in[8:3];
        end
    end

endmodule
/* verilator lint_on TIMESCALEMOD */