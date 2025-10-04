`timescale 1ns/1ps
`include "opcodes.vh"

module tb_alu;

  // DUT I/O
  reg  [31:0] input1, input2;
  reg  [3:0]  alu_sel;
  wire [31:0] out;
  wire        over, under;

  // Instantiate DUT
  alu dut (
    .input1(input1),
    .input2(input2),
    .alu_sel(alu_sel),
    .out(out),
    .over(over),
    .under(under)
  );

  // Golden model outputs
  reg [31:0] g_out;
  reg        g_over, g_under;

  // ----------------- Golden helpers (Verilog-2001) -----------------

  task golden_add;
    input  [31:0] a, b;
    output [31:0] r;
    output        over_p, under_n;
    reg    [31:0] sum;
  begin
    sum = a + b;
    r   = sum;
    over_p  = (~a[31] & ~b[31] &  sum[31]); // ++ -> -
    under_n = ( a[31] &  b[31] & ~sum[31]); // -- -> +
  end
  endtask

  task golden_sub;
    input  [31:0] a, b; // computes a - b
    output [31:0] r;
    output        over_p, under_n;
    reg    [31:0] diff;
  begin
    diff = a - b;
    r    = diff;
    // Overflow when signs differ and result sign != a's sign.
    over_p  = (~a[31] &  b[31] &  diff[31]); // + - -> - (wrapped positive overflow)
    under_n = ( a[31] & ~b[31] & ~diff[31]); // - + -> + (wrapped negative overflow)
  end
  endtask

  task golden_mul;
    input  [31:0] a, b;
    output [31:0] r;
    output        over_p, under_n;
    reg signed [31:0] sa, sb, low;
    reg signed [63:0] prod;
    reg overflow;
  begin
    sa = a; sb = b;
    prod = sa * sb;
    low  = prod[31:0];
    r    = low;

    overflow = (prod[63:32] != {32{low[31]}});
    over_p   = 1'b0;
    under_n  = 1'b0;
    if (overflow) begin
      if (a[31] ^ b[31]) begin
        // expected negative -> negative overflow
        under_n = 1'b1;
      end else begin
        // expected positive -> positive overflow
        over_p  = 1'b1;
      end
    end
  end
  endtask

  task golden_logic;
    input  [31:0] a, b;
    input  [3:0]  sel;
    output [31:0] r;
  begin
    case (sel)
      `AND: r = a & b;
      `OR:  r = a | b;
      `XOR: r = a ^ b;
      `NOT: r = ~a;
      default: r = 32'd0;
    endcase
  end
  endtask

  task golden_cmp;
    input  [31:0] a, b;
    input  [3:0]  sel;
    output [31:0] r;
    reg   signed [31:0] sa, sb;
  begin
    sa = a; sb = b;
    case (sel)
      `EQ:  r = (a == b) ? 32'd1 : 32'd0;
      `NEQ: r = (a != b) ? 32'd1 : 32'd0;
      `LT:  r = (sa <  sb) ? 32'd1 : 32'd0;
      `LTE: r = (sa <= sb) ? 32'd1 : 32'd0;
      `GT:  r = (sa >  sb) ? 32'd1 : 32'd0;
      `GTE: r = (sa >= sb) ? 32'd1 : 32'd0;
      default: r = 32'd0;
    endcase
  end
  endtask

  task compute_golden;
    input  [31:0] a, b;
    input  [3:0]  sel;
  begin
    g_over = 1'b0; g_under = 1'b0; g_out = 32'd0;
    case (sel)
      `ADD: golden_add(a, b, g_out, g_over, g_under);
      `SUB: golden_sub(a, b, g_out, g_over, g_under);
      `MUL: golden_mul(a, b, g_out, g_over, g_under);
      `AND, `OR, `XOR, `NOT: begin
        golden_logic(a, b, sel, g_out);
      end
      `EQ, `NEQ, `LT, `LTE, `GT, `GTE: begin
        golden_cmp(a, b, sel, g_out);
      end
      default: begin
        g_out = 32'd0;
      end
    endcase
  end
  endtask

  task check;
    input [255*8:1] name; // string literal OK
  begin
    #1; // settle combinational
    if (out !== g_out || over !== g_over || under !== g_under) begin
      $display("[%0s] MISMATCH sel=%0d a=0x%08x b=0x%08x | got out=0x%08x over=%0b under=%0b | exp out=0x%08x over=%0b under=%0b",
               name, alu_sel, input1, input2, out, over, under, g_out, g_over, g_under);
      $finish;
    end
  end
  endtask

  // ----------------- Tests -----------------

  task directed_tests;
  begin
    // ADD: + + -> negative (positive overflow)
    input1 = 32'h7FFFFFFF; input2 = 32'h00000001; alu_sel = `ADD;
    compute_golden(input1, input2, alu_sel); check("ADD overflow +");

    // ADD: - - -> positive (negative overflow)
    input1 = 32'h80000000; input2 = 32'h80000000; alu_sel = `ADD;
    compute_golden(input1, input2, alu_sel); check("ADD overflow -");

    // SUB: a positive, b negative
    input1 = 32'h7FFFFFFF; input2 = 32'h80000000; alu_sel = `SUB;
    compute_golden(input1, input2, alu_sel); check("SUB overflow +");

    // SUB: a negative, b positive
    input1 = 32'h80000000; input2 = 32'h7FFFFFFF; alu_sel = `SUB;
    compute_golden(input1, input2, alu_sel); check("SUB overflow -");

    // MUL: overflow positive
    input1 = 32'h40000000; input2 = 32'h00000004; alu_sel = `MUL;
    compute_golden(input1, input2, alu_sel); check("MUL overflow +");

    // MUL: overflow negative
    input1 = -32'sd300000000; input2 = 32'sd30; alu_sel = `MUL;
    compute_golden(input1, input2, alu_sel); check("MUL overflow -");

    // Logic ops
    input1 = 32'hF0F0F0F0; input2 = 32'h0F0F0F0F; alu_sel = `AND;
    compute_golden(input1, input2, alu_sel); check("AND");
    alu_sel = `OR;  compute_golden(input1, input2, alu_sel); check("OR");
    alu_sel = `XOR; compute_golden(input1, input2, alu_sel); check("XOR");
    alu_sel = `NOT; compute_golden(input1, input2, alu_sel); check("NOT");

    // Comparisons (signed)
    input1 = -32'sd1; input2 =  32'sd1; alu_sel = `LT;
    compute_golden(input1, input2, alu_sel); check("LT");
    alu_sel = `GTE; compute_golden(input1, input2, alu_sel); check("GTE");
    input1 = 32'd5; input2 = 32'd5; alu_sel = `EQ;
    compute_golden(input1, input2, alu_sel); check("EQ");
    alu_sel = `NEQ; compute_golden(input1, input2, alu_sel); check("NEQ");
  end
  endtask

  task random_tests;
    input integer N;
    integer i;
    integer idx;
  begin
    for (i = 0; i < N; i = i + 1) begin
      // Choose opcode among 12 known ones
      idx = $random;
      idx = (idx < 0) ? -idx : idx;
      idx = idx % 12;

      case (idx)
        0: alu_sel = `ADD;
        1: alu_sel = `SUB;
        2: alu_sel = `MUL;
        3: alu_sel = `AND;
        4: alu_sel = `OR;
        5: alu_sel = `XOR;
        6: alu_sel = `NOT;
        7: alu_sel = `EQ;
        8: alu_sel = `NEQ;
        9: alu_sel = `LT;
        10: alu_sel = `LTE;
        11: alu_sel = `GT; // GTE will get hit by directed
        default: alu_sel = `ADD;
      endcase

      input1 = $random;
      input2 = $random;

      compute_golden(input1, input2, alu_sel);
      check("random");
    end
  end
  endtask

  // ----------------- Run -----------------
  initial begin
    input1 = 0; input2 = 0; alu_sel = 0;
    directed_tests();
    random_tests(2000);
    $display("All tests PASSED");
    $finish;
  end

endmodule
