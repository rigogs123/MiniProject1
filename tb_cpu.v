//implement the tb for datapath here
`include "opcodes.vh"
`include "variables.vh"

`timescale 1ns/1ps

module tb_cpu;

  // Testbench signals
  reg clk;
  reg [4:0] reg_obs_sel;
  wire [31:0] reg_obs_data;

  // Instantiate the DUT (Device Under Test)
  cpu_top uut (
    .clk(clk),
    .reg_obs_sel(reg_obs_sel),
    .reg_obs_data(reg_obs_data)
  );

  // Clock generation: 10 ns period (100 MHz)
  initial begin
    clk = 0;
    forever #5 clk = ~clk;   // toggle every 5 ns
  end

  // Stimulus
  initial begin
    // Initialize signals
    reg_obs_sel = 0;

    // Optional waveform dump
    $dumpfile("cpu_top_tb.vcd");
    $dumpvars(0, tb_cpu_top);

    // Run for 35 clock cycles
    repeat (128) @(posedge clk);

    $display("Simulation finished after 35 clock cycles.");
    $finish;
  end

endmodule
