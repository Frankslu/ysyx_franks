// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_i_mem.h"

void VMain_i_mem___ctor_var_reset(VMain_i_mem* vlSelf);

VMain_i_mem::VMain_i_mem(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_i_mem___ctor_var_reset(this);
}

void VMain_i_mem::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_i_mem::~VMain_i_mem() {
}
