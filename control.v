//here the control for the pipeline will be implemented
/* verilator lint_off TIMESCALEMOD */
`include "opcodes.vh"
module control (
    input wire [1:0] type_in,
    input wire [3:0] op_in,
    input wire br_in,

    output wire pc_sel_out,
    output wire [1:0] imm_sel_out,
    output wire reg_wen_out,
    output wire mux_1_sel_out,
    output wire mux_2_sel_out,
    output wire [3:0] alu_sel_out,
    output wire mux_3_sel_out,
    output wire [1:0] type_out,
    output wire [3:0] op_out,
    output wire dmem_wen_out,
    output wire wb_sel_out
);

    reg [18:0] output_vector;
    assign pc_sel_out = output_vector[18];
    assign imm_sel_out = output_vector[17:16];
    assign reg_wen_out = output_vector[15];
    assign mux_1_sel_out = output_vector[14];
    assign mux_2_sel_out = output_vector[13];
    assign alu_sel_out = output_vector[12:9];
    assign mux_3_sel_out = output_vector[8];
    assign type_out = type_in;
    assign op_out = op_in;
    assign dmem_wen_out = output_vector[1];
    assign wb_sel_out = output_vector[0];

    always @(*) begin
        if (type_in == `R_TYPE) begin
            case (op_in)
                `ADD: output_vector = 19'b0001010000000000001;
                `SUB: output_vector = 19'b0001010001000000101;
                `MUL: output_vector = 19'b0001010010000001001;
                `AND: output_vector = 19'b0001010011000001101;
                `OR:  output_vector = 19'b0001010100000010001;
                `XOR: output_vector = 19'b0001010101000010101;
                `NOT: output_vector = 19'b0001010110000011001;
                `EQ:  output_vector = 19'b0000010111000011101;
                `NEQ: output_vector = 19'b0000011000000100001;
                `LT:  output_vector = 19'b0000011001000100101;
                `LTE: output_vector = 19'b0000011010000101001;
                `GT:  output_vector = 19'b0000011011000101101;
                `GTE: output_vector = 19'b0000011100000110001;
                default: output_vector = 19'b0;
            endcase
        end else if (type_in == `I_TYPE) begin
            case (op_in)
                `ADDI: output_vector = 19'b0101000000001000001;
                `SUBI: output_vector = 19'b0101000001001000101;
                `MULI: output_vector = 19'b0101000010001001001;
                `ANDI: output_vector = 19'b0101000011001001101;
                `ORI:  output_vector = 19'b0101000100001010001;
                `XORI: output_vector = 19'b0101000101001010101;
                `NOTI: output_vector = 19'b0101000110001011001;
                `EQI:  output_vector = 19'b0100000111001011101;
                `NEQI: output_vector = 19'b0100001000001100001;
                `LTI:  output_vector = 19'b0100001001001100101;
                `LTEI: output_vector = 19'b0100001010001101001;
                `GTI:  output_vector = 19'b0100001011001101101;
                `GTEI: output_vector = 19'b0100001100001110001;
                `LUI:  output_vector = 19'b0011000000001110101;
                `JUMP: output_vector = 19'b1101000000101111001;
                default: output_vector = 19'b0;
            endcase
        end else if (type_in == `M_TYPE) begin 
            case (op_in)
                `LW: output_vector = 19'b0101000000010000000;
                `STW: output_vector = 19'b0100000000010010110;
                default: output_vector = 19'b0;
            endcase        
        end else if (type_in == `B_TYPE) begin
            if (br_in) begin
                case (op_in)
                    `BEQ:  output_vector = 19'b1111100000111000001;
                    `BNEQ: output_vector = 19'b1111100000111000101;
                    `BLT:  output_vector = 19'b1111100000111001001;
                    `BLTE: output_vector = 19'b1111100000111001101;
                    `BGT:  output_vector = 19'b1111100000111010001;
                    `BGTE: output_vector = 19'b1111100000111010101;
                    default: output_vector = 19'b0;
                endcase
            end else begin
                case (op_in)
                    `BEQ:  output_vector = 19'b0110100000111000001;
                    `BNEQ: output_vector = 19'b0110100000111000101;
                    `BLT:  output_vector = 19'b0110100000111001001;
                    `BLTE: output_vector = 19'b0110100000111001101;
                    `BGT:  output_vector = 19'b0110100000111010001;
                    `BGTE: output_vector = 19'b0110100000111010101;
                    default: output_vector = 19'b0;
                endcase
            end
        end else begin
            output_vector = 19'b0;
        end
    end

endmodule
/* verilator lint_on TIMESCALEMOD */