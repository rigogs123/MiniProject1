// File: variables.vh
// VARIABLES for IMEM AND DMEM

`ifndef OPCODES
`define OPCODES
//========INSTRUCTION TYPES=======
`define R_TYPE 2'b00
`define I_TYPE 2'b01
`define M_TYPE 2'b10
`define B_TYPE 2'b11
//=====REGISTER INSTRUCTIONS======
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
//=====IMMEDIATE INSTRUCTIONS=====
`define ADDI 4'b0000
`define SUBI 4'b0001
`define MULI 4'b0010
`define ANDI 4'b0011
`define ORI  4'b0100
`define XORI 4'b0101
`define NOTI 4'b0110
`define EQI  4'b0111
`define NEQI 4'b1000
`define LTI  4'b1001
`define LTEI 4'b1010
`define GTI  4'b1011
`define GTEI 4'b1100

`define LUI  4'b1101
`define JUMP 4'b1110
//=====MEMORY INSTRUCTIONS=======
`define LW   4'b0000
`define LH   4'b0001
`define LHU  4'b0010
`define LB   4'b0011 
`define LBU  4'b0100
`define STW  4'b0101
`define STH  4'b0110
`define STB  4'b0111
//=====BRANCH INSTRUCTIONS=======
`define BEQ  4'b0000
`define BNEQ 4'b0001
`define BLT  4'b0010
`define BLTE 4'b0011 
`define BGT  4'b0100
`define BGTE 4'b0101


`endif