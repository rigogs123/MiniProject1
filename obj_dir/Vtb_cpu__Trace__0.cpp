// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_cpu__Syms.h"


void Vtb_cpu___024root__trace_chg_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_0\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_cpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_cpu___024root__trace_chg_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__addr),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__addr),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+6,(vlSelf->tb_cpu__DOT__uut__DOT__PC__DOT__data),32);
        bufp->chgCData(oldp+7,(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data),5);
        bufp->chgBit(oldp+8,(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data));
        bufp->chgIData(oldp+9,(vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data),32);
        bufp->chgIData(oldp+10,(((0x100U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                  ? ((IData)(4U) + vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data)
                                  : vlSelf->tb_cpu__DOT__uut__DOT__alu_out)),32);
        bufp->chgIData(oldp+11,(((IData)(4U) + vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data)),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data),32);
        bufp->chgBit(oldp+14,(vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data));
        bufp->chgIData(oldp+15,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out),32);
        bufp->chgBit(oldp+32,(((1U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+33,(((2U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+34,(((3U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+35,(((4U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+36,(((5U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+37,(((6U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+38,(((7U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+39,(((8U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+40,(((9U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+41,(((0xaU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+42,(((0xbU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+43,(((0xcU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+44,(((0xdU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+45,(((0xeU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+46,(((0xfU == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+47,(((0x10U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
        bufp->chgBit(oldp+48,(((0x11U == (IData)(vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data)) 
                               & (IData)(vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+49,(((IData)(4U) + vlSelf->tb_cpu__DOT__uut__DOT__pc_mux)),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_cpu__DOT__uut__DOT__pc_mux),32);
        bufp->chgBit(oldp+51,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 0x12U))));
        bufp->chgIData(oldp+52,(vlSelf->tb_cpu__DOT__uut__DOT__alu_out),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_cpu__DOT__uut__DOT__inst),32);
        bufp->chgCData(oldp+54,((3U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                       >> 0x10U))),2);
        bufp->chgIData(oldp+55,(((0x20000U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                  ? ((0x10000U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                      ? (((- (IData)(
                                                     (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0x15U) 
                                         | (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                            >> 0xbU))
                                      : (((- (IData)(
                                                     (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0x10U) 
                                         | (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                            >> 0x10U)))
                                  : ((0x10000U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                      ? (0xffff0000U 
                                         & vlSelf->tb_cpu__DOT__uut__DOT__inst)
                                      : 0U))),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_cpu__DOT__uut__DOT__wb_data),32);
        bufp->chgBit(oldp+57,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 0xfU))));
        bufp->chgIData(oldp+58,(vlSelf->tb_cpu__DOT__uut__DOT__data1),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_cpu__DOT__uut__DOT__data2),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_cpu__DOT__uut__DOT__source_data),32);
        bufp->chgBit(oldp+61,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 0xeU))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 0xdU))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 8U))));
        bufp->chgCData(oldp+64,((0xfU & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                         >> 9U))),4);
        bufp->chgIData(oldp+65,(vlSelf->tb_cpu__DOT__uut__DOT__mux1_out),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_cpu__DOT__uut__DOT__mux2_out),32);
        bufp->chgBit(oldp+67,(vlSelf->tb_cpu__DOT__uut__DOT__alu_over));
        bufp->chgBit(oldp+68,(vlSelf->tb_cpu__DOT__uut__DOT__alu_under));
        bufp->chgIData(oldp+69,(vlSelf->tb_cpu__DOT__uut__DOT__ccr_d),32);
        bufp->chgCData(oldp+70,((3U & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                       >> 4U))),2);
        bufp->chgCData(oldp+71,((0xfU & vlSelf->tb_cpu__DOT__uut__DOT__inst)),4);
        bufp->chgBit(oldp+72,(vlSelf->tb_cpu__DOT__uut__DOT__ccr_br));
        bufp->chgIData(oldp+73,(vlSelf->tb_cpu__DOT__uut__DOT__dmem_data),32);
        bufp->chgBit(oldp+74,((1U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)));
        bufp->chgBit(oldp+75,((1U & (vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector 
                                     >> 1U))));
        bufp->chgIData(oldp+76,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__sum),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__diff),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y),32);
        bufp->chgQData(oldp+82,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result),64);
        bufp->chgIData(oldp+84,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry),32);
        bufp->chgIData(oldp+85,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk1__DOT__diff),32);
        bufp->chgIData(oldp+86,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk2__DOT__diff),32);
        bufp->chgIData(oldp+87,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk3__DOT__diff),32);
        bufp->chgIData(oldp+88,(vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__unnamedblk4__DOT__diff),32);
        bufp->chgIData(oldp+89,(vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector),19);
        bufp->chgCData(oldp+90,((0x1fU & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+91,((0x1fU & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                          >> 0x10U))),5);
        bufp->chgSData(oldp+92,((vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                 >> 0x15U)),11);
        bufp->chgSData(oldp+93,((vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                 >> 0x10U)),16);
        bufp->chgIData(oldp+94,((vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+95,((0x1fU & (vlSelf->tb_cpu__DOT__uut__DOT__inst 
                                          >> 6U))),5);
    }
    bufp->chgBit(oldp+96,(vlSelf->tb_cpu__DOT__clk));
    bufp->chgCData(oldp+97,(vlSelf->tb_cpu__DOT__reg_obs_sel),5);
    bufp->chgIData(oldp+98,(vlSelf->tb_cpu__DOT__reg_obs_data),32);
}

void Vtb_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_cleanup\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
