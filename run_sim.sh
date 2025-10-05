#!/bin/bash

rm -rf obj_dir/
verilator --binary --trace adder.v alu.v ccr_logic.v control.v dmem.v imem.v imm_gen.v latch_32bit.v mux_2_to_1.v regfile.v  register_32bit.v cpu_top.v tb_cpu.v --top tb_cpu
./obj_dir/Vtb_cpu
gtkwave cpu_top_tb.vcd
