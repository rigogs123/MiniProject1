//ccr_in BIT[0] --> alu_in returned zero zero in last operation
    //clear the bit in ccr_out if alu_in currently no loger retuning zero
//ccr_in BIT[1] --> ALU detected overflow in last operation
    //clear the bit in ccr_out if ALU currently no loger detecting overflow
//ccr_in BIT[2] --> ALU detected underflow in last operation
    //clear the bit in ccr_out if ALU currently no loger detection underflow

//ccr_in BIT[3] --> EQ (ALU returned 32'b1 for equal to in last operation)
//ccr_in BIT[4] --> NEQ (ALU returned 32'b1 for not equals to in last operation)
//ccr_in BIT[5] --> LT (ALU returned 32'b1 for less than in last operation)
//ccr_in BIT[6] --> LTE (ALU returned 32'b1 for less than or equal to in last operation)
//ccr_in BIT[7] --> GT (ALU returned 32'b1 for greater than in last operation)
//ccr_in BIT[8] --> GTE (ALU returned 32'b1 for greater than or equal to in last operation)

//ccr_in BIT[31:9] --> NOT USED, always write 0 in ccr_out

/*For ccr_out[8:3], if a branch operation is currently present i.e. type_in == `B_TYPE and the bit corresponding
to that branch type is set i.e. (op_in == BEQ && bit[3]), then we need to set br_out
to output a 1'b1, otherwise it needs to output a 0. We also need to clear the bit in ccr_out
if these conditions are encountered, otherwise the corresponding bit in ccr_out can stay the same as ccr_in.
*/
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
        // Default: copy ccr_in and zero out unused bits
        ccr_out = ccr_in;
        ccr_out[31:9] = 23'b0;

        // --- Bits [0:2] Zero / Overflow / Underflow ---
        ccr_out[0] = (alu_in == 32'b0) ? 1'b1 : 1'b0;
        ccr_out[1] = (over) ? 1'b1 : 1'b0;
        ccr_out[2] = (under) ? 1'b1 : 1'b0;

        // --- Branch detection and CCR bits [3:8] ---
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