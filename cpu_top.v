//implement the entire datapath here
/* verilator lint_off TIMESCALEMOD */
`include "opcodes.vh"
`include "variables.vh"
module cpu_top (
    input wire clk,
    input wire reg_obs_sel,
    output wire reg_obs_data
);
    wire [31:0] pc;
    wire [31:0] pc_4;
    wire [31:0] pc_mux;
    wire pc_sel;
    wire [31:0] alu_out;
    wire [31:0] inst;
    wire [1:0] imm_sel;
    wire [31:0] immediate_sign_ex;
    wire [4:0] wb_reg_dest;
    wire [31:0] wb_data;
    wire wb_reg_wen;
    wire [31:0] pc_mux_ex;
    wire reg_wen;
    wire [31:0] data1;
    wire [31:0] data2;
    wire [31:0] source_data;
    wire mux_1_sel;
    wire mux_2_sel;
    wire mux_3_sel;
    wire alu_sel;
    wire [31:0] mux1_out;
    wire [31:0] mux2_out;
    wire [31:0] mux3_out;
    wire [31:0] pc_mux_ex_four;
    wire alu_over;
    wire alu_under;
    wire [31:0] ccr_d;
    wire [31:0] ccr_q;
    wire [1:0] ccr_type;
    wire [3:0] ccr_op;
    wire ccr_br;
    wire [31:0] wb_alu_out;
    wire [31:0] dmem_data;
    wire wb_sel_q;
    wire wb_sel_d;
    wire dmem_wen;

    register_32bit PC (
        .D(pc_4),
        .clk(clk),
        .Q(pc)
    );
    register_32bit PC_PIPE_REG (
        .D(pc_mux),
        .clk(clk),
        .Q(pc_mux_ex)
    );
    register_32bit INST_PIPE_REG (
        .D(inst[10:6]),
        .clk(clk),
        .Q(wb_reg_dest)
    );
    register_32bit WEN_PIPE_REG (
        .D(reg_wen),
        .clk(clk),
        .Q(wb_reg_wen)
    );
    register_32bit ALU_PIPE_REG (
        .D(mux3_out),
        .clk(clk),
        .Q(wb_alu_out)
    );
    register_32bit WB_PIPE_REG (
        .D(wb_sel_d),
        .clk(clk),
        .Q(wb_sel_q)
    );
    register_32bit CCR (
        .D(ccr_d),
        .clk(clk),
        .Q(ccr_q)
    );
    adder ADDER_1 (
        .in1(pc_mux),
        .in2(32'b100),
        .out(pc_4)
    );
    adder ADDER_2 (
        .in1(pc_mux_ex),
        .in2(32'b100),
        .out(pc_mux_ex_four)
    );
    mux_2_to_1 MUX_PC (
        .in0(pc),
        .in1(alu_out),
        .sel(pc_sel),
        .out(pc_mux)
    );
    mux_2_to_1 MUX_1 (
        .in0(data1),
        .in1(pc_mux_ex),
        .sel(mux_1_sel),
        .out(mux1_out)
    );
    mux_2_to_1 MUX_2 (
        .in0(immediate_sign_ex),
        .in1(data2),
        .sel(mux_2_sel),
        .out(mux2_out)
    );
    mux_2_to_1 MUX_3 (
        .in0(alu_out),
        .in1(pc_mux_ex_four),
        .sel(mux_3_sel),
        .out(mux3_out)
    );
    mux_2_to_1 MUX_WB (
        .in0(dmem_data),
        .in1(wb_alu_out),
        .sel(wb_sel_q),
        .out(wb_data)
    );
    imem IMEM (
        .clk        (clk),
        .write_en   (1'b0),
        .addr       (pc_mux),
        .write_data (32'b0),
        .read_data  (inst)
    );
    dmem DMEM (
        .clk        (clk),
        .write_en   (dmem_wen),
        .addr       (alu_out),
        .write_data (source_data),
        .read_data  (dmem_data)
    );
    imm_gen IMM_GEN (
        .a          (inst[15:11]),
        .b          (inst[20:16]),
        .c          (inst[31:21]),
        .imm_sel_in (imm_sel),
        .out        (immediate_sign_ex)
    );
    ccr_logic CCR_LOGIC (
        .over    (alu_over),
        .under   (alu_under),
        .alu_in  (alu_out),
        .ccr_in  (ccr_q),
        .type_in (ccr_type),
        .op_in   (ccr_op),
        .br_out  (ccr_br),
        .ccr_out (ccr_d)
    );
    alu ALU (
        .input1  (mux1_out),
        .input2  (mux2_out),
        .alu_sel (alu_sel),
        .out     (alu_out),
        .over    (alu_over),
        .under   (alu_under)
    );
    regfile REGFILE (
        .reg1_in          (inst[15:11]),
        .reg2_in          (inst[20:16]),
        .reg_source_in    (inst[10:6]),
        .reg_dest_in      (wb_reg_dest),
        .data_in          (wb_data),
        .reg_wen_in       (wb_reg_wen),
        .reg_obs_data_out (reg_obs_data),
        .reg_obs_sel_in   (reg_obs_sel),
        .data1_out        (data1),
        .data2_out        (data2),
        .source_data_out  (source_data)
    );
    control CONTROL(
        .type_in       (inst[5:4]),
        .op_in         (inst[3:0]),
        .br_in         (ccr_br),
        .pc_sel_out    (pc_sel),
        .imm_sel_out   (imm_sel),
        .reg_wen_out   (reg_wen),
        .mux_1_sel_out (mux_1_sel),
        .mux_2_sel_out (mux_2_sel),
        .alu_sel_out   (alu_sel),
        .mux_3_sel_out (mux_3_sel),
        .type_out      (ccr_type),
        .op_out        (ccr_op),
        .dmem_wen_out  (dmem_wen),
        .wb_sel_out    (wb_sel_d)
    );

endmodule

/* verilator lint_on TIMESCALEMOD */
