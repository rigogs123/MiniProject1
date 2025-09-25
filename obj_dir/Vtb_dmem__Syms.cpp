// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_dmem__pch.h"
#include "Vtb_dmem.h"
#include "Vtb_dmem___024root.h"

// FUNCTIONS
Vtb_dmem__Syms::~Vtb_dmem__Syms()
{
}

Vtb_dmem__Syms::Vtb_dmem__Syms(VerilatedContext* contextp, const char* namep, Vtb_dmem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
