// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrdmem.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrdmem__Syms.h"
#include "Vrdmem___024root.h"

void Vrdmem___024root___ctor_var_reset(Vrdmem___024root* vlSelf);

Vrdmem___024root::Vrdmem___024root(Vrdmem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrdmem___024root___ctor_var_reset(this);
}

void Vrdmem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrdmem___024root::~Vrdmem___024root() {
}
