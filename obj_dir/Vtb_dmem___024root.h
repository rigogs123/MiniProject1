// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dmem.h for the primary calling header

#ifndef VERILATED_VTB_DMEM___024ROOT_H_
#define VERILATED_VTB_DMEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dmem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dmem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dmem__DOT__clk;
    CData/*0:0*/ tb_dmem__DOT__write_en;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_dmem__DOT__addr;
    IData/*31:0*/ tb_dmem__DOT__write_data;
    IData/*31:0*/ tb_dmem__DOT__read_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 32> tb_dmem__DOT__uut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dmem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dmem___024root(Vtb_dmem__Syms* symsp, const char* v__name);
    ~Vtb_dmem___024root();
    VL_UNCOPYABLE(Vtb_dmem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
