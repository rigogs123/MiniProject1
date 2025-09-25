// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dmem.h for the primary calling header

#include "Vtb_dmem__pch.h"
#include "Vtb_dmem___024root.h"

VL_ATTR_COLD void Vtb_dmem___024root___eval_initial__TOP(Vtb_dmem___024root* vlSelf);
VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(Vtb_dmem___024root* vlSelf);
VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(Vtb_dmem___024root* vlSelf);

void Vtb_dmem___024root___eval_initial(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial\n"); );
    // Body
    Vtb_dmem___024root___eval_initial__TOP(vlSelf);
    Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0 
        = vlSelf->tb_dmem__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_dmem__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_dmem.v", 
                                           29);
        vlSelf->tb_dmem__DOT__clk = (1U & (~ (IData)(vlSelf->tb_dmem__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_dmem__DOT__write_en = 0U;
    vlSelf->tb_dmem__DOT__addr = 0U;
    vlSelf->tb_dmem__DOT__write_data = 0U;
    VL_WRITEF("===== Starting dmem test =====\n");
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       42);
    vlSelf->tb_dmem__DOT__addr = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       46);
    VL_WRITEF("Initial read @ 0x%08x = 0x%08x\n",32,
              vlSelf->tb_dmem__DOT__addr,32,vlSelf->tb_dmem__DOT__read_data);
    vlSelf->tb_dmem__DOT__addr = 4U;
    vlSelf->tb_dmem__DOT__write_data = 0xdeadbeefU;
    vlSelf->tb_dmem__DOT__write_en = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       53);
    vlSelf->tb_dmem__DOT__write_en = 0U;
    VL_WRITEF("Wrote 0x%08x to address 0x%08x\n",32,
              vlSelf->tb_dmem__DOT__write_data,32,vlSelf->tb_dmem__DOT__addr);
    vlSelf->tb_dmem__DOT__addr = 4U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       59);
    VL_WRITEF("Read @ 0x%08x = 0x%08x (expected 0xDEADBEEF)\n",
              32,vlSelf->tb_dmem__DOT__addr,32,vlSelf->tb_dmem__DOT__read_data);
    vlSelf->tb_dmem__DOT__addr = 5U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       64);
    VL_WRITEF("Misaligned read @ 0x%08x = 0x%08x (expected 0)\n",
              32,vlSelf->tb_dmem__DOT__addr,32,vlSelf->tb_dmem__DOT__read_data);
    vlSelf->tb_dmem__DOT__addr = 0x20U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       69);
    VL_WRITEF("Out-of-bounds read @ 0x%08x = 0x%08x (expected 0)\n",
              32,vlSelf->tb_dmem__DOT__addr,32,vlSelf->tb_dmem__DOT__read_data);
    vlSelf->tb_dmem__DOT__addr = 0x1cU;
    vlSelf->tb_dmem__DOT__write_data = 0xaabbccddU;
    vlSelf->tb_dmem__DOT__write_en = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       76);
    vlSelf->tb_dmem__DOT__write_en = 0U;
    VL_WRITEF("Wrote 0x%08x to last valid word address 0x%08x\n",
              32,vlSelf->tb_dmem__DOT__write_data,32,
              vlSelf->tb_dmem__DOT__addr);
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dmem.v", 
                                       81);
    VL_WRITEF("Read @ 0x%08x = 0x%08x (expected 0xAABBCCDD)\n",
              32,vlSelf->tb_dmem__DOT__addr,32,vlSelf->tb_dmem__DOT__read_data);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dmem.v", 
                                       85);
    VL_WRITEF("===== dmem test completed =====\n");
    VL_FINISH_MT("tb_dmem.v", 87, "");
}

void Vtb_dmem___024root___eval_act(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_dmem___024root___nba_sequent__TOP__0(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v0;
    __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v0;
    __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dmem__DOT__uut__DOT__mem__v0;
    __Vdlyvset__tb_dmem__DOT__uut__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v1;
    __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v1;
    __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v2;
    __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v2;
    __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v3;
    __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v3;
    __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__tb_dmem__DOT__uut__DOT__mem__v0 = 0U;
    if (((0U == (3U & vlSelf->tb_dmem__DOT__addr)) 
         & (0x1cU >= vlSelf->tb_dmem__DOT__addr))) {
        if (vlSelf->tb_dmem__DOT__write_en) {
            __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v0 
                = (0xffU & vlSelf->tb_dmem__DOT__write_data);
            __Vdlyvset__tb_dmem__DOT__uut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v0 
                = (0x1fU & vlSelf->tb_dmem__DOT__addr);
            __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v1 
                = (0xffU & (vlSelf->tb_dmem__DOT__write_data 
                            >> 8U));
            __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v1 
                = (0x1fU & ((IData)(1U) + vlSelf->tb_dmem__DOT__addr));
            __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v2 
                = (0xffU & (vlSelf->tb_dmem__DOT__write_data 
                            >> 0x10U));
            __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v2 
                = (0x1fU & ((IData)(2U) + vlSelf->tb_dmem__DOT__addr));
            __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v3 
                = (vlSelf->tb_dmem__DOT__write_data 
                   >> 0x18U);
            __Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v3 
                = (0x1fU & ((IData)(3U) + vlSelf->tb_dmem__DOT__addr));
        }
        vlSelf->tb_dmem__DOT__read_data = ((vlSelf->tb_dmem__DOT__uut__DOT__mem
                                            [(0x1fU 
                                              & ((IData)(3U) 
                                                 + vlSelf->tb_dmem__DOT__addr))] 
                                            << 0x18U) 
                                           | ((vlSelf->tb_dmem__DOT__uut__DOT__mem
                                               [(0x1fU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->tb_dmem__DOT__addr))] 
                                               << 0x10U) 
                                              | ((vlSelf->tb_dmem__DOT__uut__DOT__mem
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->tb_dmem__DOT__addr))] 
                                                  << 8U) 
                                                 | vlSelf->tb_dmem__DOT__uut__DOT__mem
                                                 [(0x1fU 
                                                   & vlSelf->tb_dmem__DOT__addr)])));
    } else {
        vlSelf->tb_dmem__DOT__read_data = 0xffffffffU;
    }
    if (__Vdlyvset__tb_dmem__DOT__uut__DOT__mem__v0) {
        vlSelf->tb_dmem__DOT__uut__DOT__mem[__Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v0] 
            = __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v0;
        vlSelf->tb_dmem__DOT__uut__DOT__mem[__Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v1] 
            = __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v1;
        vlSelf->tb_dmem__DOT__uut__DOT__mem[__Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v2] 
            = __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v2;
        vlSelf->tb_dmem__DOT__uut__DOT__mem[__Vdlyvdim0__tb_dmem__DOT__uut__DOT__mem__v3] 
            = __Vdlyvval__tb_dmem__DOT__uut__DOT__mem__v3;
    }
}

void Vtb_dmem___024root___eval_nba(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dmem___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_dmem___024root___timing_resume(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_dmem___024root___eval_triggers__act(Vtb_dmem___024root* vlSelf);

bool Vtb_dmem___024root___eval_phase__act(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dmem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_dmem___024root___timing_resume(vlSelf);
        Vtb_dmem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dmem___024root___eval_phase__nba(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_dmem___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dmem___024root___dump_triggers__nba(Vtb_dmem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dmem___024root___dump_triggers__act(Vtb_dmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dmem___024root___eval(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_dmem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_dmem.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_dmem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_dmem.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_dmem___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_dmem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_dmem___024root___eval_debug_assertions(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
