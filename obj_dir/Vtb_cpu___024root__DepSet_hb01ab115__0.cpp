// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu__Syms.h"
#include "Vtb_cpu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_cpu__DOT____Vrepeat0;
    tb_cpu__DOT____Vrepeat0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->tb_cpu__DOT__reg_obs_sel = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x705f7462U;
    __Vtemp_1[2U] = 0x755f746fU;
    __Vtemp_1[3U] = 0x6370U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    tb_cpu__DOT____Vrepeat0 = 0x80U;
    while (VL_LTS_III(32, 0U, tb_cpu__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_cpu.clk)", 
                                                           "tb_cpu.v", 
                                                           37);
        tb_cpu__DOT____Vrepeat0 = (tb_cpu__DOT____Vrepeat0 
                                   - (IData)(1U));
    }
    VL_WRITEF("Simulation finished after 35 clock cycles.\n");
    VL_FINISH_MT("tb_cpu.v", 40, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_cpu__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 
        = vlSelf->tb_cpu__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
