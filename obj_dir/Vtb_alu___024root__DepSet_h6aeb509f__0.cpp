// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"
#include "Vtb_alu__Syms.h"
#include "Vtb_alu___024root.h"

extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hf2dc256d_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h35ebf3c2_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hcfc9396a_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h9e7f4a49_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h29cc452e_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h6601295c_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h998cbd10_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h2f8cf624_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h2022ca60_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hfc073c82_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h7e0fa684_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hda600290_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h52734e21_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hbb281736_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h103a6e39_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h5ddb97dc_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_he7cc0b96_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_hdf41b428_0;
extern const VlWide<64>/*2047:0*/ Vtb_alu__ConstPool__CONST_h5fc82cd8_0;

VL_INLINE_OPT VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__1__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__1__label);
    IData/*31:0*/ __Vilp;
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__2__sel;
    __Vtask_tb_alu__DOT__run_vec__2__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__2__a;
    __Vtask_tb_alu__DOT__run_vec__2__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__2__b;
    __Vtask_tb_alu__DOT__run_vec__2__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__2__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__2__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__3__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__3__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__4__sel;
    __Vtask_tb_alu__DOT__run_vec__4__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__4__a;
    __Vtask_tb_alu__DOT__run_vec__4__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__4__b;
    __Vtask_tb_alu__DOT__run_vec__4__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__4__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__4__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__5__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__5__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__6__sel;
    __Vtask_tb_alu__DOT__run_vec__6__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__6__a;
    __Vtask_tb_alu__DOT__run_vec__6__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__6__b;
    __Vtask_tb_alu__DOT__run_vec__6__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__6__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__6__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__7__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__7__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__8__sel;
    __Vtask_tb_alu__DOT__run_vec__8__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__8__a;
    __Vtask_tb_alu__DOT__run_vec__8__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__8__b;
    __Vtask_tb_alu__DOT__run_vec__8__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__8__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__8__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__9__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__9__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__10__sel;
    __Vtask_tb_alu__DOT__run_vec__10__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__10__a;
    __Vtask_tb_alu__DOT__run_vec__10__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__10__b;
    __Vtask_tb_alu__DOT__run_vec__10__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__10__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__10__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__11__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__11__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__12__sel;
    __Vtask_tb_alu__DOT__run_vec__12__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__12__a;
    __Vtask_tb_alu__DOT__run_vec__12__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__12__b;
    __Vtask_tb_alu__DOT__run_vec__12__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__12__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__12__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__13__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__13__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__14__sel;
    __Vtask_tb_alu__DOT__run_vec__14__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__14__a;
    __Vtask_tb_alu__DOT__run_vec__14__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__14__b;
    __Vtask_tb_alu__DOT__run_vec__14__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__14__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__14__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__15__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__15__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__16__sel;
    __Vtask_tb_alu__DOT__run_vec__16__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__16__a;
    __Vtask_tb_alu__DOT__run_vec__16__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__16__b;
    __Vtask_tb_alu__DOT__run_vec__16__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__16__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__16__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__17__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__17__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__18__sel;
    __Vtask_tb_alu__DOT__run_vec__18__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__18__a;
    __Vtask_tb_alu__DOT__run_vec__18__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__18__b;
    __Vtask_tb_alu__DOT__run_vec__18__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__18__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__18__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__19__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__19__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__20__sel;
    __Vtask_tb_alu__DOT__run_vec__20__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__20__a;
    __Vtask_tb_alu__DOT__run_vec__20__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__20__b;
    __Vtask_tb_alu__DOT__run_vec__20__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__20__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__20__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__21__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__21__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__22__sel;
    __Vtask_tb_alu__DOT__run_vec__22__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__22__a;
    __Vtask_tb_alu__DOT__run_vec__22__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__22__b;
    __Vtask_tb_alu__DOT__run_vec__22__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__22__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__22__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__23__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__23__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__24__sel;
    __Vtask_tb_alu__DOT__run_vec__24__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__24__a;
    __Vtask_tb_alu__DOT__run_vec__24__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__24__b;
    __Vtask_tb_alu__DOT__run_vec__24__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__24__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__24__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__25__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__25__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__26__sel;
    __Vtask_tb_alu__DOT__run_vec__26__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__26__a;
    __Vtask_tb_alu__DOT__run_vec__26__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__26__b;
    __Vtask_tb_alu__DOT__run_vec__26__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__26__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__26__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__27__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__27__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__28__sel;
    __Vtask_tb_alu__DOT__run_vec__28__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__28__a;
    __Vtask_tb_alu__DOT__run_vec__28__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__28__b;
    __Vtask_tb_alu__DOT__run_vec__28__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__28__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__28__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__29__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__29__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__30__sel;
    __Vtask_tb_alu__DOT__run_vec__30__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__30__a;
    __Vtask_tb_alu__DOT__run_vec__30__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__30__b;
    __Vtask_tb_alu__DOT__run_vec__30__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__30__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__30__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__31__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__31__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__32__sel;
    __Vtask_tb_alu__DOT__run_vec__32__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__32__a;
    __Vtask_tb_alu__DOT__run_vec__32__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__32__b;
    __Vtask_tb_alu__DOT__run_vec__32__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__32__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__32__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__33__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__33__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__34__sel;
    __Vtask_tb_alu__DOT__run_vec__34__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__34__a;
    __Vtask_tb_alu__DOT__run_vec__34__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__34__b;
    __Vtask_tb_alu__DOT__run_vec__34__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__34__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__34__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__35__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__35__label);
    CData/*3:0*/ __Vtask_tb_alu__DOT__run_vec__36__sel;
    __Vtask_tb_alu__DOT__run_vec__36__sel = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__36__a;
    __Vtask_tb_alu__DOT__run_vec__36__a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__run_vec__36__b;
    __Vtask_tb_alu__DOT__run_vec__36__b = 0;
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__run_vec__36__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__run_vec__36__label);
    VlWide<64>/*2039:0*/ __Vtask_tb_alu__DOT__show__37__label;
    VL_ZERO_W(2040, __Vtask_tb_alu__DOT__show__37__label);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x755f7462U;
    __Vtemp_1[2U] = 0x616cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("=== EE275 ALU RUN ===\n");
    vlSelf->tb_alu__DOT__alu_sel = 0U;
    vlSelf->tb_alu__DOT__input1 = 1U;
    vlSelf->tb_alu__DOT__input2 = 2U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__1__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hf2dc256d_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__1__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__2__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h35ebf3c2_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__2__b = 1U;
    __Vtask_tb_alu__DOT__run_vec__2__a = 0x7fffffffU;
    __Vtask_tb_alu__DOT__run_vec__2__sel = 0U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__2__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__2__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__2__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__3__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__2__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__3__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__4__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hcfc9396a_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__4__b = 0x80000000U;
    __Vtask_tb_alu__DOT__run_vec__4__a = 0x80000000U;
    __Vtask_tb_alu__DOT__run_vec__4__sel = 0U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__4__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__4__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__4__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__5__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__4__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__5__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__6__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h9e7f4a49_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__6__b = 3U;
    __Vtask_tb_alu__DOT__run_vec__6__a = 5U;
    __Vtask_tb_alu__DOT__run_vec__6__sel = 1U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__6__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__6__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__6__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__7__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__6__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__7__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__8__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h29cc452e_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__8__b = 0x7fffffffU;
    __Vtask_tb_alu__DOT__run_vec__8__a = 0x80000000U;
    __Vtask_tb_alu__DOT__run_vec__8__sel = 1U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__8__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__8__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__8__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__9__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__8__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__9__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__10__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h6601295c_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__10__b = 0x80000000U;
    __Vtask_tb_alu__DOT__run_vec__10__a = 0x7fffffffU;
    __Vtask_tb_alu__DOT__run_vec__10__sel = 1U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__10__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__10__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__10__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__11__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__10__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__11__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__12__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h998cbd10_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__12__b = 7U;
    __Vtask_tb_alu__DOT__run_vec__12__a = 3U;
    __Vtask_tb_alu__DOT__run_vec__12__sel = 2U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__12__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__12__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__12__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__13__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__12__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__13__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__14__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h2f8cf624_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__14__b = 4U;
    __Vtask_tb_alu__DOT__run_vec__14__a = 0x40000000U;
    __Vtask_tb_alu__DOT__run_vec__14__sel = 2U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__14__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__14__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__14__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__15__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__14__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__15__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__16__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h2022ca60_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__16__b = 0x1eU;
    __Vtask_tb_alu__DOT__run_vec__16__a = 0xee1e5d00U;
    __Vtask_tb_alu__DOT__run_vec__16__sel = 2U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__16__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__16__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__16__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__17__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__16__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__17__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__18__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hfc073c82_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__18__b = 0xf0f0f0fU;
    __Vtask_tb_alu__DOT__run_vec__18__a = 0xf0f0f0f0U;
    __Vtask_tb_alu__DOT__run_vec__18__sel = 3U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__18__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__18__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__18__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__19__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__18__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__19__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__20__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h7e0fa684_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__20__b = 0xf00f0fU;
    __Vtask_tb_alu__DOT__run_vec__20__a = 0xf0f00000U;
    __Vtask_tb_alu__DOT__run_vec__20__sel = 4U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__20__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__20__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__20__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__21__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__20__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__21__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__22__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hda600290_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__22__b = 0x55555555U;
    __Vtask_tb_alu__DOT__run_vec__22__a = 0xaaaaaaaaU;
    __Vtask_tb_alu__DOT__run_vec__22__sel = 5U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__22__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__22__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__22__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__23__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__22__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__23__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__24__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h52734e21_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__24__b = 0xdeadbeefU;
    __Vtask_tb_alu__DOT__run_vec__24__a = 0xffU;
    __Vtask_tb_alu__DOT__run_vec__24__sel = 6U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__24__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__24__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__24__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__25__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__24__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__25__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__26__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hbb281736_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__26__b = 5U;
    __Vtask_tb_alu__DOT__run_vec__26__a = 5U;
    __Vtask_tb_alu__DOT__run_vec__26__sel = 7U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__26__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__26__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__26__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__27__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__26__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__27__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__28__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h103a6e39_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__28__b = 6U;
    __Vtask_tb_alu__DOT__run_vec__28__a = 5U;
    __Vtask_tb_alu__DOT__run_vec__28__sel = 8U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__28__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__28__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__28__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__29__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__28__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__29__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__30__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h5ddb97dc_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__30__b = 1U;
    __Vtask_tb_alu__DOT__run_vec__30__a = 0xffffffffU;
    __Vtask_tb_alu__DOT__run_vec__30__sel = 9U;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__30__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__30__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__30__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__31__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__30__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__31__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__32__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_he7cc0b96_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__32__b = 0xffffffffU;
    __Vtask_tb_alu__DOT__run_vec__32__a = 0xffffffffU;
    __Vtask_tb_alu__DOT__run_vec__32__sel = 0xaU;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__32__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__32__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__32__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__33__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__32__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__33__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__34__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_hdf41b428_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__34__b = 0xfffffffeU;
    __Vtask_tb_alu__DOT__run_vec__34__a = 7U;
    __Vtask_tb_alu__DOT__run_vec__34__sel = 0xbU;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__34__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__34__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__34__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__35__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__34__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n",
              2040,__Vtask_tb_alu__DOT__show__35__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__run_vec__36__label[__Vilp] 
            = Vtb_alu__ConstPool__CONST_h5fc82cd8_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_tb_alu__DOT__run_vec__36__b = 7U;
    __Vtask_tb_alu__DOT__run_vec__36__a = 7U;
    __Vtask_tb_alu__DOT__run_vec__36__sel = 0xcU;
    vlSelf->tb_alu__DOT__alu_sel = __Vtask_tb_alu__DOT__run_vec__36__sel;
    vlSelf->tb_alu__DOT__input1 = __Vtask_tb_alu__DOT__run_vec__36__a;
    vlSelf->tb_alu__DOT__input2 = __Vtask_tb_alu__DOT__run_vec__36__b;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vtask_tb_alu__DOT__show__37__label[__Vilp] 
            = __Vtask_tb_alu__DOT__run_vec__36__label[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb_alu.v", 
                                       27);
    VL_WRITEF("%0s | sel=%0#  A=0x%08x (%0d)  B=0x%08x (%0d)  ->  OUT=0x%08x (%0d)  OVER=%0b UNDER=%0b\n=== Done ===\n",
              2040,__Vtask_tb_alu__DOT__show__37__label.data(),
              4,(IData)(vlSelf->tb_alu__DOT__alu_sel),
              32,vlSelf->tb_alu__DOT__input1,32,vlSelf->tb_alu__DOT__input1,
              32,vlSelf->tb_alu__DOT__input2,32,vlSelf->tb_alu__DOT__input2,
              32,vlSelf->tb_alu__DOT__out,32,vlSelf->tb_alu__DOT__out,
              1,(IData)(vlSelf->tb_alu__DOT__over),
              1,vlSelf->tb_alu__DOT__under);
    VL_FINISH_MT("tb_alu.v", 86, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_alu___024root___eval_triggers__act(Vtb_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_alu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
