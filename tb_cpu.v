//implement the tb for datapath here
`include "opcodes.vh"
`include "variables.vh"

`timescale 1ns/1ps

module tb_cpu;

  reg clk;
  reg [4:0] reg_obs_sel;
  wire [31:0] reg_obs_data;
  cpu_top uut (
    .clk(clk),
    .reg_obs_sel(reg_obs_sel),
    .reg_obs_data(reg_obs_data)
  );
  initial begin
    clk = 0;
    forever #5 clk = ~clk;   // toggle every 5 ns
  end
  initial begin
    reg_obs_sel = 0;
    $dumpfile("cpu_top_tb.vcd");
    $dumpvars(0, tb_cpu_top);
    repeat (128) @(posedge clk);

    $display("Simulation finished after 35 clock cycles.");
    $finish;
  end

endmodule
