// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cpu.h for the primary calling header

#ifndef VERILATED_VTB_CPU___024ROOT_H_
#define VERILATED_VTB_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cpu__DOT__clk;
    CData/*4:0*/ tb_cpu__DOT__reg_obs_sel;
    CData/*0:0*/ tb_cpu__DOT__uut__DOT__alu_over;
    CData/*0:0*/ tb_cpu__DOT__uut__DOT__alu_under;
    CData/*0:0*/ tb_cpu__DOT__uut__DOT__ccr_br;
    CData/*4:0*/ tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data;
    CData/*0:0*/ tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data;
    CData/*0:0*/ tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_cpu__DOT__reg_obs_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__pc_mux;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__alu_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__inst;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__wb_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__data1;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__data2;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__source_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__mux1_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__mux2_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ccr_d;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__dmem_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__PC__DOT__data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__CCR__DOT__data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__addr;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__addr;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__a;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__b;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__sum;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__diff;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__x;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__y;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__carry;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out;
    IData/*31:0*/ tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out;
    IData/*18:0*/ tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result;
    VlUnpacked<CData/*7:0*/, 256> tb_cpu__DOT__uut__DOT__IMEM__DOT__mem;
    VlUnpacked<CData/*7:0*/, 64> tb_cpu__DOT__uut__DOT__DMEM__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h605b3eaf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cpu___024root(Vtb_cpu__Syms* symsp, const char* v__name);
    ~Vtb_cpu___024root();
    VL_UNCOPYABLE(Vtb_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
