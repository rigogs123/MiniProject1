// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dmem.h for the primary calling header

#include "Vtb_dmem__pch.h"
#include "Vtb_dmem___024root.h"

VL_ATTR_COLD void Vtb_dmem___024root___eval_static(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_dmem___024root___eval_initial__TOP(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x696e6974U;
    __Vtemp_1[2U] = 0x6f72795fU;
    __Vtemp_1[3U] = 0x6d656dU;
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->tb_dmem__DOT__uut__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_dmem___024root___eval_final__TOP(Vtb_dmem___024root* vlSelf);

VL_ATTR_COLD void Vtb_dmem___024root___eval_final(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_final\n"); );
    // Body
    Vtb_dmem___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_dmem___024root___eval_final__TOP(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_final__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f6f7574U;
    __Vtemp_1[2U] = 0x6d6f7279U;
    __Vtemp_1[3U] = 0x6d65U;
    VL_WRITEMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                  ,  &(vlSelf->tb_dmem__DOT__uut__DOT__mem)
                  , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_dmem___024root___eval_settle(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dmem___024root___dump_triggers__act(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dmem.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dmem___024root___dump_triggers__nba(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dmem.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dmem___024root___ctor_var_reset(Vtb_dmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dmem__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_dmem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_dmem__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_dmem__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_dmem__DOT__uut__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0 = VL_RAND_RESET_I(1);
}
