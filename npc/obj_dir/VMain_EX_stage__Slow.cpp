// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_EX_stage.h"
#include "VMain__Syms.h"

void VMain_EX_stage___ctor_var_reset(VMain_EX_stage* vlSelf);

VMain_EX_stage::VMain_EX_stage(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_EX_stage___ctor_var_reset(this);
}

void VMain_EX_stage::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_EX_stage::~VMain_EX_stage() {
}
