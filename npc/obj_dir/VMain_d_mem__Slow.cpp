// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_d_mem.h"

void VMain_d_mem___ctor_var_reset(VMain_d_mem* vlSelf);

VMain_d_mem::VMain_d_mem(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_d_mem___ctor_var_reset(this);
}

void VMain_d_mem::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_d_mem::~VMain_d_mem() {
}
