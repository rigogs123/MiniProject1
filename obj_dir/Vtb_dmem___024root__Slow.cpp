// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dmem.h for the primary calling header

#include "Vtb_dmem__pch.h"
#include "Vtb_dmem__Syms.h"
#include "Vtb_dmem___024root.h"

void Vtb_dmem___024root___ctor_var_reset(Vtb_dmem___024root* vlSelf);

Vtb_dmem___024root::Vtb_dmem___024root(Vtb_dmem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dmem___024root___ctor_var_reset(this);
}

void Vtb_dmem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_dmem___024root::~Vtb_dmem___024root() {
}
