// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_mycpu_top.h"

void VMain_mycpu_top___ctor_var_reset(VMain_mycpu_top* vlSelf);

VMain_mycpu_top::VMain_mycpu_top(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_mycpu_top___ctor_var_reset(this);
}

void VMain_mycpu_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_mycpu_top::~VMain_mycpu_top() {
}
