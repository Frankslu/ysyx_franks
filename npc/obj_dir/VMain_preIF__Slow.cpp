// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_preIF.h"

void VMain_preIF___ctor_var_reset(VMain_preIF* vlSelf);

VMain_preIF::VMain_preIF(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_preIF___ctor_var_reset(this);
}

void VMain_preIF::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_preIF::~VMain_preIF() {
}
