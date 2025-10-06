// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf);

void Vtb_cpu___024root___eval_initial(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 
        = vlSelf->tb_cpu__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_cpu.v", 
                                           24);
        vlSelf->tb_cpu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_cpu__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___act_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__reg_obs_data = ((0x10U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                          ? ((8U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                              ? 0xdeadbeefU
                                              : ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out))))
                                          : ((8U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                              ? ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out)))
                                              : ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out
                                                    : 0U)))));
}

void Vtb_cpu___024root___eval_act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_cpu___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<IData/*18:0*/, 128> Vtb_cpu__ConstPool__TABLE_hd5a9b0ee_0;

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0;
    __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0;
    __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0;
    __Vdlyvset__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1;
    __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1;
    __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2;
    __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2;
    __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3;
    __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3;
    __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 = 0U;
    if (((0U == (3U & vlSelf->tb_cpu__DOT__uut__DOT__alu_out)) 
         & (0x3cU >= vlSelf->tb_cpu__DOT__uut__DOT__alu_out))) {
        if ((2U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
            __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 
                = (0xffU & vlSelf->tb_cpu__DOT__uut__DOT__source_data);
            __Vdlyvset__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0 
                = (0x3fU & vlSelf->tb_cpu__DOT__uut__DOT__alu_out);
            __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1 
                = (0xffU & (vlSelf->tb_cpu__DOT__uut__DOT__source_data 
                            >> 8U));
            __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1 
                = (0x3fU & ((IData)(1U) + vlSelf->tb_cpu__DOT__uut__DOT__alu_out));
            __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2 
                = (0xffU & (vlSelf->tb_cpu__DOT__uut__DOT__source_data 
                            >> 0x10U));
            __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2 
                = (0x3fU & ((IData)(2U) + vlSelf->tb_cpu__DOT__uut__DOT__alu_out));
            __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3 
                = (vlSelf->tb_cpu__DOT__uut__DOT__source_data 
                   >> 0x18U);
            __Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3 
                = (0x3fU & ((IData)(3U) + vlSelf->tb_cpu__DOT__uut__DOT__alu_out));
        }
        vlSelf->tb_cpu__DOT__uut__DOT__dmem_data = 
            ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
              [(0x3fU & ((IData)(3U) + vlSelf->tb_cpu__DOT__uut__DOT__alu_out))] 
              << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                            [(0x3fU & ((IData)(2U) 
                                       + vlSelf->tb_cpu__DOT__uut__DOT__alu_out))] 
                            << 0x10U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                          [(0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->tb_cpu__DOT__uut__DOT__alu_out))] 
                                          << 8U) | 
                                         vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [(0x3fU & vlSelf->tb_cpu__DOT__uut__DOT__alu_out)])));
    } else {
        vlSelf->tb_cpu__DOT__uut__DOT__dmem_data = 0xffffffffU;
    }
    vlSelf->tb_cpu__DOT__uut__DOT__PC__DOT__data = 
        ((IData)(4U) + vlSelf->tb_cpu__DOT__uut__DOT__pc_mux);
    vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data = vlSelf->tb_cpu__DOT__uut__DOT__ccr_d;
    vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data 
        = (1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                 >> 0xfU));
    vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data 
        = (1U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data 
        = ((0x100U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
            ? ((IData)(4U) + vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data)
            : vlSelf->tb_cpu__DOT__uut__DOT__alu_out);
    vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data 
        = (0x1fU & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                    >> 6U));
    if (__Vdlyvset__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0) {
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0] 
            = __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v0;
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1] 
            = __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v1;
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2] 
            = __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v2;
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3] 
            = __Vdlyvval__tb_cpu__DOT__uut__DOT__DMEM__DOT__mem__v3;
    }
    vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data 
        = vlSelf->tb_cpu__DOT__uut__DOT__pc_mux;
    vlSelf->tb_cpu__DOT__uut__DOT__wb_data = ((IData)(vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data)
                                               ? vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data
                                               : vlSelf->tb_cpu__DOT__uut__DOT__dmem_data);
    vlSelf->tb_cpu__DOT__uut__DOT__inst = (((0U == 
                                             (3U & vlSelf->tb_cpu__DOT__uut__DOT__pc_mux)) 
                                            & (0xfcU 
                                               >= vlSelf->tb_cpu__DOT__uut__DOT__pc_mux))
                                            ? ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->tb_cpu__DOT__uut__DOT__pc_mux))] 
                                                << 0x18U) 
                                               | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                                   [
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->tb_cpu__DOT__uut__DOT__pc_mux))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                                      [
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->tb_cpu__DOT__uut__DOT__pc_mux))] 
                                                      << 8U) 
                                                     | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                                     [
                                                     (0xffU 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__pc_mux)])))
                                            : 0xffffffffU);
    if (((1U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((2U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((3U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((4U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((5U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((6U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((7U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((8U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((9U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xaU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xbU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xcU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xdU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xeU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0xfU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0x10U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    if (((0x11U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
         & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))) {
        vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out 
            = vlSelf->tb_cpu__DOT__uut__DOT__wb_data;
    }
    vlSelf->tb_cpu__DOT__reg_obs_data = ((0x10U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                          ? ((8U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                              ? 0xdeadbeefU
                                              : ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out))))
                                          : ((8U & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                              ? ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out)))
                                              : ((4U 
                                                  & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_cpu__DOT__reg_obs_sel))
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out
                                                    : 0U)))));
    vlSelf->tb_cpu__DOT__uut__DOT__source_data = ((0x400U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x200U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? 0xdeadbeefU
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                     ? 0xdeadbeefU
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 0xdeadbeefU
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out))))
                                                   : 
                                                  ((0x200U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out)
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out)
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out)))
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out)
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out
                                                       : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out)
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out
                                                       : 0U)))));
    vlSelf->tb_cpu__DOT__uut__DOT__data1 = ((0x8000U 
                                             & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                             ? ((0x4000U 
                                                 & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                 ? 0xdeadbeefU
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out))))
                                             : ((0x4000U 
                                                 & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out)
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out)
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out)))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out)
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out)
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out
                                                    : 0U)))));
    vlSelf->tb_cpu__DOT__uut__DOT__data2 = ((0x100000U 
                                             & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                             ? ((0x80000U 
                                                 & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                 ? 0xdeadbeefU
                                                 : 
                                                ((0x40000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 0xdeadbeefU
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 0xdeadbeefU
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out))))
                                             : ((0x80000U 
                                                 & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                 ? 
                                                ((0x40000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out)))
                                                 : 
                                                ((0x40000U 
                                                  & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out
                                                    : vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                    ? vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out
                                                    : 0U)))));
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_br = 0U;
    if ((3U == (3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                      >> 4U)))) {
        vlSelf->tb_cpu__DOT__uut__DOT__ccr_br = ((1U 
                                                  & (~ 
                                                     (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                      >> 3U))) 
                                                 && (1U 
                                                     & ((4U 
                                                         & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                         ? 
                                                        ((1U 
                                                          & (~ 
                                                             (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                              >> 1U))) 
                                                         && (1U 
                                                             & ((1U 
                                                                 & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                                 ? 
                                                                (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                                 >> 8U)
                                                                 : 
                                                                (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                                 >> 7U))))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                           ? 
                                                          (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                           >> 6U)
                                                           : 
                                                          (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                           >> 5U))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                           ? 
                                                          (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                           >> 4U)
                                                           : 
                                                          (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                           >> 3U))))));
    } else if ((0U == (3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                             >> 4U)))) {
        vlSelf->tb_cpu__DOT__uut__DOT__ccr_br = (1U 
                                                 & ((8U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                      ? 
                                                     ((1U 
                                                       & (~ 
                                                          (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                           >> 1U))) 
                                                      && ((1U 
                                                           & (~ vlSelf->tb_cpu__DOT__uut__DOT__inst)) 
                                                          && (1U 
                                                              & (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                                 >> 8U))))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                        ? 
                                                       (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                        >> 7U)
                                                        : 
                                                       (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                        >> 6U))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                        ? 
                                                       (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                        >> 5U)
                                                        : 
                                                       (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                        >> 4U))))
                                                     : 
                                                    ((1U 
                                                      & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                         >> 2U)) 
                                                     && ((1U 
                                                          & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                             >> 1U)) 
                                                         && ((1U 
                                                              & vlSelf->tb_cpu__DOT__uut__DOT__inst) 
                                                             && (1U 
                                                                 & (vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data 
                                                                    >> 3U)))))));
    }
    __Vtableidx1 = (((IData)(vlSelf->tb_cpu__DOT__uut__DOT__ccr_br) 
                     << 6U) | ((0x3cU & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                         << 2U)) | 
                               (3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                      >> 4U))));
    vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
        = Vtb_cpu__ConstPool__TABLE_hd5a9b0ee_0[__Vtableidx1];
    vlSelf->tb_cpu__DOT__uut__DOT__mux1_out = ((0x4000U 
                                                & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                ? vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data
                                                : vlSelf->tb_cpu__DOT__uut__DOT__data1);
    vlSelf->tb_cpu__DOT__uut__DOT__mux2_out = ((0x2000U 
                                                & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                ? vlSelf->tb_cpu__DOT__uut__DOT__data2
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                        >> 0xbU))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                        >> 0x10U)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                     ? 
                                                    (0xffff0000U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                                     : 0U)));
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a = vlSelf->tb_cpu__DOT__uut__DOT__mux1_out;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b = vlSelf->tb_cpu__DOT__uut__DOT__mux2_out;
    vlSelf->tb_cpu__DOT__uut__DOT__alu_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__alu_over = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__alu_under = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__sum = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__diff = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result = 0ULL;
    if ((0x1000U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
        if ((0x800U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
            if ((0x400U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
                vlSelf->tb_cpu__DOT__uut__DOT__alu_out = 0U;
            } else if ((0x200U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
                vlSelf->tb_cpu__DOT__uut__DOT__alu_out = 0U;
            } else {
                vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk4__DOT__diff 
                    = ((IData)(1U) + (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                      + (~ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)));
                vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                    = ((1U & (((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                                >> 0x1fU))) 
                              | ((~ ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                      ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out) 
                                     >> 0x1fU)) & (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk4__DOT__diff 
                                                   >> 0x1fU))))
                        ? 0U : 1U);
            }
        } else if ((0x400U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
            if ((0x200U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
                vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk3__DOT__diff 
                    = ((IData)(1U) + (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                      + (~ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)));
                vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                    = ((1U & ((((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                 >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                                 >> 0x1fU))) 
                               | ((~ ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                       ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out) 
                                      >> 0x1fU)) & 
                                  (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk3__DOT__diff 
                                   >> 0x1fU))) | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                              ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out))))))
                        ? 0U : 1U);
            } else {
                vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk2__DOT__diff 
                    = ((IData)(1U) + (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                      + (~ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)));
                vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                    = ((1U & ((((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                 >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                                 >> 0x1fU))) 
                               | ((~ ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                       ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out) 
                                      >> 0x1fU)) & 
                                  (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk2__DOT__diff 
                                   >> 0x1fU))) | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                              ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out))))))
                        ? 1U : 0U);
            }
        } else if ((0x200U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk1__DOT__diff 
                = ((IData)(1U) + (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                  + (~ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)));
            vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                = ((1U & (((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                            >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                            >> 0x1fU))) 
                          | ((~ ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                  ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out) 
                                 >> 0x1fU)) & (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk1__DOT__diff 
                                               >> 0x1fU))))
                    ? 1U : 0U);
        } else {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                = ((0U != (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                           ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out))
                    ? 1U : 0U);
        }
    } else if ((0x800U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
        vlSelf->tb_cpu__DOT__uut__DOT__alu_out = ((0x400U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                   ? 
                                                  ((0x200U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                      ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   (~ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out))
                                                   : 
                                                  ((0x200U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 
                                                   (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                    ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                    : 
                                                   (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                    | vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)));
    } else if ((0x400U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
        if ((0x200U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                = (vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                   & vlSelf->tb_cpu__DOT__uut__DOT__mux2_out);
        } else {
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a), 
                              VL_EXTENDS_QI(64,32, vlSelf->tb_cpu__DOT__uut__DOT__mux2_out));
            vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                = (IData)(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result);
            if (((IData)((vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result 
                          >> 0x20U)) != (- (IData)(
                                                   (vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                                                    >> 0x1fU))))) {
                if (((vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a 
                      ^ vlSelf->tb_cpu__DOT__uut__DOT__mux2_out) 
                     >> 0x1fU)) {
                    vlSelf->tb_cpu__DOT__uut__DOT__alu_under = 1U;
                } else {
                    vlSelf->tb_cpu__DOT__uut__DOT__alu_over = 1U;
                }
            }
        }
    } else if ((0x200U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
            = (~ vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b);
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry = 1U;
        while ((0U != vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry)) {
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y;
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
                = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry;
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   & vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   ^ vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry 
                = VL_SHIFTL_III(32,32,32, vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry, 1U);
        }
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y;
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a;
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b;
        while ((0U != vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y)) {
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   & vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   ^ vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
                = VL_SHIFTL_III(32,32,32, vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry, 1U);
        }
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__diff 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x;
        vlSelf->tb_cpu__DOT__uut__DOT__alu_out = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__diff;
        if ((((~ (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a 
                  >> 0x1fU)) & (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                >> 0x1fU)) & (vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                                              >> 0x1fU))) {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_over = 1U;
        } else if ((((vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a 
                      >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__mux2_out 
                                      >> 0x1fU))) & 
                    (~ (vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                        >> 0x1fU)))) {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_under = 1U;
        }
    } else {
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a;
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b;
        while ((0U != vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y)) {
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   & vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                = (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x 
                   ^ vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y);
            vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y 
                = VL_SHIFTL_III(32,32,32, vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry, 1U);
        }
        vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__sum 
            = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x;
        vlSelf->tb_cpu__DOT__uut__DOT__alu_out = vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__sum;
        if ((((~ (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a 
                  >> 0x1fU)) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b 
                                   >> 0x1fU))) & (vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                                                  >> 0x1fU))) {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_over = 1U;
        } else if ((1U & (((vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a 
                            & vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b) 
                           >> 0x1fU) & (~ (vlSelf->tb_cpu__DOT__uut__DOT__alu_out 
                                           >> 0x1fU))))) {
            vlSelf->tb_cpu__DOT__uut__DOT__alu_under = 1U;
        }
    }
    vlSelf->tb_cpu__DOT__uut__DOT__pc_mux = ((0x40000U 
                                              & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                              ? vlSelf->tb_cpu__DOT__uut__DOT__alu_out
                                              : vlSelf->tb_cpu__DOT__uut__DOT__PC__DOT__data);
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d = vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data;
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d = (0x1ffU 
                                            & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d);
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d = ((0xfffffff8U 
                                             & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d) 
                                            | (((IData)(vlSelf->tb_cpu__DOT__uut__DOT__alu_under) 
                                                << 2U) 
                                               | (((IData)(vlSelf->tb_cpu__DOT__uut__DOT__alu_over) 
                                                   << 1U) 
                                                  | (0U 
                                                     == vlSelf->tb_cpu__DOT__uut__DOT__alu_out))));
    if ((3U == (3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                      >> 4U)))) {
        if ((1U & (~ (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                              >> 1U)))) {
                    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d 
                        = ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                            ? (0xfffffeffU & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)
                            : (0xffffff7fU & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d));
                }
            } else {
                vlSelf->tb_cpu__DOT__uut__DOT__ccr_d 
                    = ((2U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                        ? ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                            ? (0xffffffbfU & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)
                            : (0xffffffdfU & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d))
                        : ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                            ? (0xffffffefU & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)
                            : (0xfffffff7U & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)));
            }
        }
    } else if ((0U == (3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                             >> 4U)))) {
        if ((8U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
            if ((4U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                              >> 1U)))) {
                    if ((1U & (~ vlSelf->tb_cpu__DOT__uut__DOT__inst))) {
                        vlSelf->tb_cpu__DOT__uut__DOT__ccr_d 
                            = (0x100U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d);
                    }
                }
            } else {
                vlSelf->tb_cpu__DOT__uut__DOT__ccr_d 
                    = ((2U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                        ? ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                            ? (0x80U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)
                            : (0x40U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d))
                        : ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                            ? (0x20U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)
                            : (0x10U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d)));
            }
        } else if ((4U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
            if ((2U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
                if ((1U & vlSelf->tb_cpu__DOT__uut__DOT__inst)) {
                    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d 
                        = (8U | vlSelf->tb_cpu__DOT__uut__DOT__ccr_d);
                }
            }
        }
    } else {
        vlSelf->tb_cpu__DOT__uut__DOT__ccr_d = ((0xfffffe07U 
                                                 & vlSelf->tb_cpu__DOT__uut__DOT__ccr_d) 
                                                | (0x1f8U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data));
    }
}

void Vtb_cpu___024root___eval_nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtb_cpu___024root___timing_resume(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h605b3eaf__0.resume("@(posedge tb_cpu.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_cpu___024root___timing_commit(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h605b3eaf__0.commit("@(posedge tb_cpu.clk)");
    }
}

void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf);

bool Vtb_cpu___024root___eval_phase__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__act(vlSelf);
    Vtb_cpu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_cpu___024root___timing_resume(vlSelf);
        Vtb_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cpu___024root___eval_phase__nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cpu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_cpu.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_cpu.v", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cpu___024root___eval_debug_assertions(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
