// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"
#include "Vtb_alu___024root.h"

VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf);

void Vtb_alu___024root___eval_initial(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial\n"); );
    // Body
    Vtb_alu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vtb_alu___024root___act_sequent__TOP__0(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_alu__DOT__dut__DOT__a = vlSelf->tb_alu__DOT__input1;
    vlSelf->tb_alu__DOT__dut__DOT__b = vlSelf->tb_alu__DOT__input2;
    vlSelf->tb_alu__DOT__out = 0U;
    vlSelf->tb_alu__DOT__over = 0U;
    vlSelf->tb_alu__DOT__under = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__sum = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__diff = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__x = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__y = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__carry = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__mult_result = 0ULL;
    if ((8U & (IData)(vlSelf->tb_alu__DOT__alu_sel))) {
        vlSelf->tb_alu__DOT__out = ((4U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                     ? ((2U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                                  ? 0U
                                                  : 
                                                 (VL_GTES_III(32, vlSelf->tb_alu__DOT__input1, vlSelf->tb_alu__DOT__input2)
                                                   ? 1U
                                                   : 0U)))
                                     : ((2U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                         ? ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                             ? (VL_GTS_III(32, vlSelf->tb_alu__DOT__input1, vlSelf->tb_alu__DOT__input2)
                                                 ? 1U
                                                 : 0U)
                                             : (VL_LTES_III(32, vlSelf->tb_alu__DOT__input1, vlSelf->tb_alu__DOT__input2)
                                                 ? 1U
                                                 : 0U))
                                         : ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                             ? (VL_LTS_III(32, vlSelf->tb_alu__DOT__input1, vlSelf->tb_alu__DOT__input2)
                                                 ? 1U
                                                 : 0U)
                                             : ((vlSelf->tb_alu__DOT__input1 
                                                 != vlSelf->tb_alu__DOT__input2)
                                                 ? 1U
                                                 : 0U))));
    } else if ((4U & (IData)(vlSelf->tb_alu__DOT__alu_sel))) {
        vlSelf->tb_alu__DOT__out = ((2U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                     ? ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                         ? ((vlSelf->tb_alu__DOT__input1 
                                             == vlSelf->tb_alu__DOT__input2)
                                             ? 1U : 0U)
                                         : (~ vlSelf->tb_alu__DOT__input1))
                                     : ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))
                                         ? (vlSelf->tb_alu__DOT__input1 
                                            ^ vlSelf->tb_alu__DOT__input2)
                                         : (vlSelf->tb_alu__DOT__input1 
                                            | vlSelf->tb_alu__DOT__input2)));
    } else if ((2U & (IData)(vlSelf->tb_alu__DOT__alu_sel))) {
        if ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))) {
            vlSelf->tb_alu__DOT__out = (vlSelf->tb_alu__DOT__input1 
                                        & vlSelf->tb_alu__DOT__input2);
        } else {
            vlSelf->tb_alu__DOT__dut__DOT__mult_result 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__dut__DOT__a), 
                              VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__input2));
            vlSelf->tb_alu__DOT__out = (IData)(vlSelf->tb_alu__DOT__dut__DOT__mult_result);
            if (((IData)((vlSelf->tb_alu__DOT__dut__DOT__mult_result 
                          >> 0x20U)) != (- (IData)(
                                                   (vlSelf->tb_alu__DOT__out 
                                                    >> 0x1fU))))) {
                if (((vlSelf->tb_alu__DOT__dut__DOT__a 
                      ^ vlSelf->tb_alu__DOT__input2) 
                     >> 0x1fU)) {
                    vlSelf->tb_alu__DOT__under = 1U;
                } else {
                    vlSelf->tb_alu__DOT__over = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_alu__DOT__alu_sel))) {
        vlSelf->tb_alu__DOT__dut__DOT__y = (~ vlSelf->tb_alu__DOT__dut__DOT__b);
        vlSelf->tb_alu__DOT__dut__DOT__carry = 1U;
        while ((0U != vlSelf->tb_alu__DOT__dut__DOT__carry)) {
            vlSelf->tb_alu__DOT__dut__DOT__x = vlSelf->tb_alu__DOT__dut__DOT__y;
            vlSelf->tb_alu__DOT__dut__DOT__y = vlSelf->tb_alu__DOT__dut__DOT__carry;
            vlSelf->tb_alu__DOT__dut__DOT__carry = 
                (vlSelf->tb_alu__DOT__dut__DOT__x & vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__y = (vlSelf->tb_alu__DOT__dut__DOT__x 
                                                ^ vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__carry = 
                VL_SHIFTL_III(32,32,32, vlSelf->tb_alu__DOT__dut__DOT__carry, 1U);
        }
        vlSelf->tb_alu__DOT__dut__DOT__b = vlSelf->tb_alu__DOT__dut__DOT__y;
        vlSelf->tb_alu__DOT__dut__DOT__x = vlSelf->tb_alu__DOT__dut__DOT__a;
        vlSelf->tb_alu__DOT__dut__DOT__y = vlSelf->tb_alu__DOT__dut__DOT__b;
        while ((0U != vlSelf->tb_alu__DOT__dut__DOT__y)) {
            vlSelf->tb_alu__DOT__dut__DOT__carry = 
                (vlSelf->tb_alu__DOT__dut__DOT__x & vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__x = (vlSelf->tb_alu__DOT__dut__DOT__x 
                                                ^ vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__y = VL_SHIFTL_III(32,32,32, vlSelf->tb_alu__DOT__dut__DOT__carry, 1U);
        }
        vlSelf->tb_alu__DOT__dut__DOT__diff = vlSelf->tb_alu__DOT__dut__DOT__x;
        vlSelf->tb_alu__DOT__out = vlSelf->tb_alu__DOT__dut__DOT__diff;
        if ((((~ (vlSelf->tb_alu__DOT__dut__DOT__a 
                  >> 0x1fU)) & (vlSelf->tb_alu__DOT__input2 
                                >> 0x1fU)) & (vlSelf->tb_alu__DOT__out 
                                              >> 0x1fU))) {
            vlSelf->tb_alu__DOT__over = 1U;
        } else if ((((vlSelf->tb_alu__DOT__dut__DOT__a 
                      >> 0x1fU) & (~ (vlSelf->tb_alu__DOT__input2 
                                      >> 0x1fU))) & 
                    (~ (vlSelf->tb_alu__DOT__out >> 0x1fU)))) {
            vlSelf->tb_alu__DOT__under = 1U;
        }
    } else {
        vlSelf->tb_alu__DOT__dut__DOT__x = vlSelf->tb_alu__DOT__dut__DOT__a;
        vlSelf->tb_alu__DOT__dut__DOT__y = vlSelf->tb_alu__DOT__dut__DOT__b;
        while ((0U != vlSelf->tb_alu__DOT__dut__DOT__y)) {
            vlSelf->tb_alu__DOT__dut__DOT__carry = 
                (vlSelf->tb_alu__DOT__dut__DOT__x & vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__x = (vlSelf->tb_alu__DOT__dut__DOT__x 
                                                ^ vlSelf->tb_alu__DOT__dut__DOT__y);
            vlSelf->tb_alu__DOT__dut__DOT__y = VL_SHIFTL_III(32,32,32, vlSelf->tb_alu__DOT__dut__DOT__carry, 1U);
        }
        vlSelf->tb_alu__DOT__dut__DOT__sum = vlSelf->tb_alu__DOT__dut__DOT__x;
        vlSelf->tb_alu__DOT__out = vlSelf->tb_alu__DOT__dut__DOT__sum;
        if ((((~ (vlSelf->tb_alu__DOT__dut__DOT__a 
                  >> 0x1fU)) & (~ (vlSelf->tb_alu__DOT__dut__DOT__b 
                                   >> 0x1fU))) & (vlSelf->tb_alu__DOT__out 
                                                  >> 0x1fU))) {
            vlSelf->tb_alu__DOT__over = 1U;
        } else if ((1U & (((vlSelf->tb_alu__DOT__dut__DOT__a 
                            & vlSelf->tb_alu__DOT__dut__DOT__b) 
                           >> 0x1fU) & (~ (vlSelf->tb_alu__DOT__out 
                                           >> 0x1fU))))) {
            vlSelf->tb_alu__DOT__under = 1U;
        }
    }
}

void Vtb_alu___024root___eval_act(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_alu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_alu___024root___eval_nba(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_alu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtb_alu___024root___timing_resume(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_alu___024root___eval_triggers__act(Vtb_alu___024root* vlSelf);

bool Vtb_alu___024root___eval_phase__act(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_alu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_alu___024root___timing_resume(vlSelf);
        Vtb_alu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_alu___024root___eval_phase__nba(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_alu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__nba(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_alu___024root___eval(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_alu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_alu.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_alu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_alu.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_alu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_alu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_alu___024root___eval_debug_assertions(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
