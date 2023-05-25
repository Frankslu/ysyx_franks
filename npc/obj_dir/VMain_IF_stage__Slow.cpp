// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_IF_stage.h"
#include "VMain__Syms.h"

void VMain_IF_stage___ctor_var_reset(VMain_IF_stage* vlSelf);

VMain_IF_stage::VMain_IF_stage(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_IF_stage___ctor_var_reset(this);
}

void VMain_IF_stage::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_IF_stage::~VMain_IF_stage() {
}
