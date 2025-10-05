//here the reg file will be implemented

module regfile (
    input wire [4:0] reg1_in, //done
    input wire [4:0] reg2_in, //done
    input wire [4:0] reg_source_in, //done
    input wire [4:0] reg_dest_in, //done
    input wire [31:0] data_in, //done
    input wire reg_wen_in, //done
    output reg [31:0] reg_obs_data_out, //done
    input wire [4:0] reg_obs_sel_in, //done
    output reg [31:0] data1_out, //done
    output reg [31:0] data2_out, //done
    output reg [31:0] source_data_out //done
);

    wire [31:0] R1_out;
    wire [31:0] R2_out;
    wire [31:0] R3_out;
    wire [31:0] R4_out;
    wire [31:0] R5_out;
    wire [31:0] R6_out;
    wire [31:0] R7_out;
    wire [31:0] R8_out;
    wire [31:0] R9_out;
    wire [31:0] R10_out;
    wire [31:0] R11_out;
    wire [31:0] R12_out;
    wire [31:0] R13_out;
    wire [31:0] R14_out;
    wire [31:0] R15_out;
    wire [31:0] R16_out;
    wire [31:0] SP_out;

    wire R1_EN;
    wire R2_EN;
    wire R3_EN;
    wire R4_EN;
    wire R5_EN;
    wire R6_EN;
    wire R7_EN;
    wire R8_EN;
    wire R9_EN;
    wire R10_EN;
    wire R11_EN;
    wire R12_EN;
    wire R13_EN;
    wire R14_EN;
    wire R15_EN;
    wire R16_EN;
    wire SP_EN;

    assign R1_EN = (reg_dest_in == 5'd1)? reg_wen_in: 1'b0; 
    assign R2_EN = (reg_dest_in == 5'd2)? reg_wen_in: 1'b0;
    assign R3_EN = (reg_dest_in == 5'd3)? reg_wen_in: 1'b0; 
    assign R4_EN = (reg_dest_in == 5'd4)? reg_wen_in: 1'b0; 
    assign R5_EN = (reg_dest_in == 5'd5)? reg_wen_in: 1'b0; 
    assign R6_EN = (reg_dest_in == 5'd6)? reg_wen_in: 1'b0; 
    assign R7_EN = (reg_dest_in == 5'd7)? reg_wen_in: 1'b0;  
    assign R8_EN = (reg_dest_in == 5'd8)? reg_wen_in: 1'b0; 
    assign R9_EN = (reg_dest_in == 5'd9)? reg_wen_in: 1'b0; 
    assign R10_EN = (reg_dest_in == 5'd10)? reg_wen_in: 1'b0; 
    assign R11_EN = (reg_dest_in == 5'd11)? reg_wen_in: 1'b0; 
    assign R12_EN = (reg_dest_in == 5'd12)? reg_wen_in: 1'b0; 
    assign R13_EN = (reg_dest_in == 5'd13)? reg_wen_in: 1'b0; 
    assign R14_EN = (reg_dest_in == 5'd14)? reg_wen_in: 1'b0; 
    assign R15_EN = (reg_dest_in == 5'd15)? reg_wen_in: 1'b0; 
    assign R16_EN = (reg_dest_in == 5'd16)? reg_wen_in: 1'b0; 
    assign SP_EN = (reg_dest_in == 5'd17)? reg_wen_in: 1'b0; 

    always @(*) begin
        //to assign data1_out
        case (reg1_in)
            5'd0: data1_out = 32'b0;
            5'd1: data1_out = R1_out;
            5'd2: data1_out = R2_out;
            5'd3: data1_out = R3_out;
            5'd4: data1_out = R4_out;
            5'd5: data1_out = R5_out;
            5'd6: data1_out = R6_out;
            5'd7: data1_out = R7_out;
            5'd8: data1_out = R8_out;
            5'd9: data1_out = R9_out;
            5'd10: data1_out = R10_out;
            5'd11: data1_out = R11_out;
            5'd12: data1_out = R12_out;
            5'd13: data1_out = R13_out;
            5'd14: data1_out = R14_out;
            5'd15: data1_out = R15_out;
            5'd16: data1_out = R16_out;
            5'd17: data1_out = SP_out;
            default: data1_out = 32'hDEAD_BEEF;
        endcase
        //to assign data2_out
        case (reg2_in)
            5'd0: data2_out = 32'b0;
            5'd1: data2_out = R1_out;
            5'd2: data2_out = R2_out;
            5'd3: data2_out = R3_out;
            5'd4: data2_out = R4_out;
            5'd5: data2_out = R5_out;
            5'd6: data2_out = R6_out;
            5'd7: data2_out = R7_out;
            5'd8: data2_out = R8_out;
            5'd9: data2_out = R9_out;
            5'd10: data2_out = R10_out;
            5'd11: data2_out = R11_out;
            5'd12: data2_out = R12_out;
            5'd13: data2_out = R13_out;
            5'd14: data2_out = R14_out;
            5'd15: data2_out = R15_out;
            5'd16: data2_out = R16_out;
            5'd17: data2_out = SP_out;
            default: data2_out = 32'hDEAD_BEEF;
        endcase
        //to assign source_data_out
        case (reg_source_in)
            5'd0: source_data_out = 32'b0;
            5'd1: source_data_out = R1_out;
            5'd2: source_data_out = R2_out;
            5'd3: source_data_out = R3_out;
            5'd4: source_data_out = R4_out;
            5'd5: source_data_out = R5_out;
            5'd6: source_data_out = R6_out;
            5'd7: source_data_out = R7_out;
            5'd8: source_data_out = R8_out;
            5'd9: source_data_out = R9_out;
            5'd10: source_data_out = R10_out;
            5'd11: source_data_out = R11_out;
            5'd12: source_data_out = R12_out;
            5'd13: source_data_out = R13_out;
            5'd14: source_data_out = R14_out;
            5'd15: source_data_out = R15_out;
            5'd16: source_data_out = R16_out;
            5'd17: source_data_out = SP_out;
            default: source_data_out = 32'hDEAD_BEEF;
        endcase
        case (reg_obs_sel_in)
            5'd0: reg_obs_data_out = 32'b0;
            5'd1: reg_obs_data_out = R1_out;
            5'd2: reg_obs_data_out = R2_out;
            5'd3: reg_obs_data_out = R3_out;
            5'd4: reg_obs_data_out = R4_out;
            5'd5: reg_obs_data_out = R5_out;
            5'd6: reg_obs_data_out = R6_out;
            5'd7: reg_obs_data_out = R7_out;
            5'd8: reg_obs_data_out = R8_out;
            5'd9: reg_obs_data_out = R9_out;
            5'd10: reg_obs_data_out = R10_out;
            5'd11: reg_obs_data_out = R11_out;
            5'd12: reg_obs_data_out = R12_out;
            5'd13: reg_obs_data_out = R13_out;
            5'd14: reg_obs_data_out = R14_out;
            5'd15: reg_obs_data_out = R15_out;
            5'd16: reg_obs_data_out = R16_out;
            5'd17: reg_obs_data_out = SP_out;
            default: reg_obs_data_out = 32'hDEAD_BEEF;
        endcase
    end


    latch_32bit R1 (
        .D(data_in),
        .en(R1_EN),
        .Q(R1_out)
    );
    latch_32bit R2 (
        .D(data_in),
        .en(R2_EN),
        .Q(R2_out)
    );
    latch_32bit R3 (
        .D(data_in),
        .en(R3_EN),
        .Q(R3_out)
    );
    latch_32bit R4 (
        .D(data_in),
        .en(R4_EN),
        .Q(R4_out)
    );
    latch_32bit R5 (
        .D(data_in),
        .en(R5_EN),
        .Q(R5_out)
    );
    latch_32bit R6 (
        .D(data_in),
        .en(R6_EN),
        .Q(R6_out)
    );
    latch_32bit R7 (
        .D(data_in),
        .en(R7_EN),
        .Q(R7_out)
    );
    latch_32bit R8 (
        .D(data_in),
        .en(R8_EN),
        .Q(R8_out)
    );
    latch_32bit R9 (
        .D(data_in),
        .en(R9_EN),
        .Q(R9_out)
    );
    latch_32bit R10 (
        .D(data_in),
        .en(R10_EN),
        .Q(R10_out)
    );
    latch_32bit R11 (
        .D(data_in),
        .en(R11_EN),
        .Q(R11_out)
    );
    latch_32bit R12 (
        .D(data_in),
        .en(R12_EN),
        .Q(R12_out)
    );
    latch_32bit R13 (
        .D(data_in),
        .en(R13_EN),
        .Q(R13_out)
    );
    latch_32bit R14 (
        .D(data_in),
        .en(R14_EN),
        .Q(R14_out)
    );
    latch_32bit R15 (
        .D(data_in),
        .en(R15_EN),
        .Q(R15_out)
    );
    latch_32bit R16 (
        .D(data_in),
        .en(R16_EN),
        .Q(R16_out)
    );
    latch_32bit SP (
        .D(data_in),
        .en(SP_EN),
        .Q(SP_out)
    );
endmodule

