// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_alu.h for the primary calling header

#ifndef VERILATED_VTB_ALU___024ROOT_H_
#define VERILATED_VTB_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_alu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_alu__DOT__alu_sel;
    CData/*0:0*/ tb_alu__DOT__over;
    CData/*0:0*/ tb_alu__DOT__under;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_alu__DOT__input1;
    IData/*31:0*/ tb_alu__DOT__input2;
    IData/*31:0*/ tb_alu__DOT__out;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__a;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__b;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__sum;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__diff;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__x;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__y;
    IData/*31:0*/ tb_alu__DOT__dut__DOT__carry;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_alu__DOT__dut__DOT__mult_result;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_alu___024root(Vtb_alu__Syms* symsp, const char* v__name);
    ~Vtb_alu___024root();
    VL_UNCOPYABLE(Vtb_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
