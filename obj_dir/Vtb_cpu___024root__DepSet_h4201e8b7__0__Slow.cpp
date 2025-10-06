// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_static(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelf->tb_cpu__DOT__uut__DOT__PC__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x595f494eU;
    __Vtemp_1[2U] = 0x454d4f52U;
    __Vtemp_1[3U] = 0x454d5f4dU;
    __Vtemp_1[4U] = 0x494dU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x595f494eU;
    __Vtemp_2[2U] = 0x454d4f52U;
    __Vtemp_2[3U] = 0x454d5f4dU;
    __Vtemp_2[4U] = 0x444dU;
    VL_READMEM_N(true, 8, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out = 0U;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final__TOP(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_final(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final\n"); );
    // Body
    Vtb_cpu___024root___eval_final__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final__TOP(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f4f5554U;
    __Vtemp_1[2U] = 0x4d4f5259U;
    __Vtemp_1[3U] = 0x4d5f4d45U;
    __Vtemp_1[4U] = 0x494d45U;
    vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                      , std::string{"w"});
    ;
    if (VL_LIKELY((0U == vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd))) {
        VL_WRITEF("ERROR: Cannot open DMEM_MEMORY_OUT.hex for writing\n");
    } else {
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [3U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                   [2U] << 0x10U) | 
                                  ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                    [1U] << 8U) | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                   [0U])));
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__addr = 0x40U;
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000000:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [7U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                   [6U] << 0x10U) | 
                                  ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                    [5U] << 8U) | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                   [4U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000004:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0xbU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                     [0xaU] << 0x10U) 
                                    | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [9U] << 8U) 
                                       | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                       [8U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000008:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0xfU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                     [0xeU] << 0x10U) 
                                    | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0xdU] << 8U) 
                                       | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                       [0xcU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x0000000c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x13U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x12U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x11U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x10U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000010:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x17U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x16U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x15U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x14U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000014:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x1bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x1aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x19U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x18U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000018:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x1fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x1eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x1dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x1cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x0000001c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x23U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x22U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x21U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x20U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000020:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x27U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x26U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x25U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x24U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000024:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x2bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x2aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x29U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x28U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000028:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x2fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x2eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x2dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x2cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x0000002c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x33U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x32U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x31U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x30U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000030:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x37U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x36U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x35U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x34U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000034:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x3bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x3aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x39U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x38U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x00000038:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                [0x3fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                      [0x3eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                         [0x3dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem
                                        [0x3cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd,"0x0000003c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data);
        VL_FCLOSE_I(vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd); VL_WRITEF("DMEM memory contents written to DMEM_MEMORY_OUT.hex\n");
    }
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x5f4f5554U;
    __Vtemp_2[2U] = 0x4d4f5259U;
    __Vtemp_2[3U] = 0x4d5f4d45U;
    __Vtemp_2[4U] = 0x444d45U;
    vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                      , std::string{"w"});
    ;
    if (VL_LIKELY((0U == vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd))) {
        VL_WRITEF("ERROR: Cannot open DMEM_MEMORY_OUT.hex for writing\n");
    } else {
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [3U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                   [2U] << 0x10U) | 
                                  ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                    [1U] << 8U) | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                   [0U])));
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__addr = 0x40U;
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000000:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [7U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                   [6U] << 0x10U) | 
                                  ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                    [5U] << 8U) | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                   [4U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000004:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0xbU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                     [0xaU] << 0x10U) 
                                    | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [9U] << 8U) 
                                       | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                       [8U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000008:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0xfU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                     [0xeU] << 0x10U) 
                                    | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0xdU] << 8U) 
                                       | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                       [0xcU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x0000000c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x13U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x12U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x11U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x10U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000010:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x17U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x16U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x15U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x14U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000014:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x1bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x1aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x19U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x18U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000018:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x1fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x1eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x1dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x1cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x0000001c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x23U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x22U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x21U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x20U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000020:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x27U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x26U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x25U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x24U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000024:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x2bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x2aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x29U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x28U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000028:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x2fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x2eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x2dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x2cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x0000002c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x33U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x32U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x31U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x30U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000030:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x37U] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x36U] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x35U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x34U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000034:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x3bU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x3aU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x39U] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x38U])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x00000038:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data 
            = ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                [0x3fU] << 0x18U) | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                      [0x3eU] << 0x10U) 
                                     | ((vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                         [0x3dU] << 8U) 
                                        | vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem
                                        [0x3cU])));
        VL_FWRITEF(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd,"0x0000003c:%08x\n",
                   32,vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data);
        VL_FCLOSE_I(vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd); VL_WRITEF("DMEM memory contents written to DMEM_MEMORY_OUT.hex\n");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_settle(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_cpu.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<IData/*18:0*/, 128> Vtb_cpu__ConstPool__TABLE_hd5a9b0ee_0;

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_br = 0U;
    vlSelf->tb_cpu__DOT__uut__DOT__wb_data = ((IData)(vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data)
                                               ? vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data
                                               : vlSelf->tb_cpu__DOT__uut__DOT__dmem_data);
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
        vlSelf->tb_cpu__DOT__uut__DOT__alu_out = ((0x800U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                   ? 
                                                  ((0x400U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                     ? 0U
                                                     : 
                                                    (VL_GTES_III(32, vlSelf->tb_cpu__DOT__uut__DOT__mux1_out, vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                      ? 1U
                                                      : 0U)))
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 
                                                   ((0x200U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                     ? 
                                                    (VL_GTS_III(32, vlSelf->tb_cpu__DOT__uut__DOT__mux1_out, vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTES_III(32, vlSelf->tb_cpu__DOT__uut__DOT__mux1_out, vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                     ? 
                                                    (VL_LTS_III(32, vlSelf->tb_cpu__DOT__uut__DOT__mux1_out, vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                      != vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                      ? 1U
                                                      : 0U))));
    } else if ((0x800U & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)) {
        vlSelf->tb_cpu__DOT__uut__DOT__alu_out = ((0x400U 
                                                   & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                   ? 
                                                  ((0x200U 
                                                    & vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector)
                                                    ? 
                                                   ((vlSelf->tb_cpu__DOT__uut__DOT__mux1_out 
                                                     == vlSelf->tb_cpu__DOT__uut__DOT__mux2_out)
                                                     ? 1U
                                                     : 0U)
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

VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___ctor_var_reset(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__reg_obs_sel = VL_RAND_RESET_I(5);
    vlSelf->tb_cpu__DOT__reg_obs_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__pc_mux = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__source_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__mux1_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__mux2_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__alu_over = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__uut__DOT__alu_under = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ccr_br = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__uut__DOT__dmem_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__PC__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__PC_PIPE_REG__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__INST_PIPE_REG__DOT__data = VL_RAND_RESET_I(5);
    vlSelf->tb_cpu__DOT__uut__DOT__WEN_PIPE_REG__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU_PIPE_REG__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__WB_PIPE_REG__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__uut__DOT__CCR__DOT__data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__fd = 0;
    vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__IMEM__DOT__unnamedblk1__DOT__word_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__fd = 0;
    vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__DMEM__DOT__unnamedblk1__DOT__word_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__diff = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__mult_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_cpu__DOT__uut__DOT__ALU__DOT__carry = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R1_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R2_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R3_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R4_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R5_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R6_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R7_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R8_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R9_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R10_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R11_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R12_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R13_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R14_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R15_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__R16_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__REGFILE__DOT__SP_out = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__uut__DOT__CONTROL__DOT__output_vector = VL_RAND_RESET_I(19);
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
