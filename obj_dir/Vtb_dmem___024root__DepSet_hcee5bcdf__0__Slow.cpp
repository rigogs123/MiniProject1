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
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x595f494eU;
    __Vtemp_1[2U] = 0x454d4f52U;
    __Vtemp_1[3U] = 0x454d5f4dU;
    __Vtemp_1[4U] = 0x444dU;
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
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
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f4f5554U;
    __Vtemp_1[2U] = 0x4d4f5259U;
    __Vtemp_1[3U] = 0x4d5f4d45U;
    __Vtemp_1[4U] = 0x444d45U;
    VL_WRITEMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
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
