// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_ID_stage.h"
#include "VMain__Syms.h"

void VMain_ID_stage___ctor_var_reset(VMain_ID_stage* vlSelf);

VMain_ID_stage::VMain_ID_stage(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_ID_stage___ctor_var_reset(this);
}

void VMain_ID_stage::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_ID_stage::~VMain_ID_stage() {
}
