// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_alu__Syms.h"


void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_alu__DOT__out),32);
        bufp->chgBit(oldp+1,(vlSelf->tb_alu__DOT__over));
        bufp->chgBit(oldp+2,(vlSelf->tb_alu__DOT__under));
        bufp->chgIData(oldp+3,(vlSelf->tb_alu__DOT__dut__DOT__a),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_alu__DOT__dut__DOT__b),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_alu__DOT__dut__DOT__sum),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_alu__DOT__dut__DOT__diff),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_alu__DOT__dut__DOT__x),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_alu__DOT__dut__DOT__y),32);
        bufp->chgQData(oldp+9,(vlSelf->tb_alu__DOT__dut__DOT__mult_result),64);
        bufp->chgIData(oldp+11,(vlSelf->tb_alu__DOT__dut__DOT__carry),32);
    }
    bufp->chgIData(oldp+12,(vlSelf->tb_alu__DOT__input1),32);
    bufp->chgIData(oldp+13,(vlSelf->tb_alu__DOT__input2),32);
    bufp->chgCData(oldp+14,(vlSelf->tb_alu__DOT__alu_sel),4);
}

void Vtb_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_cleanup\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
