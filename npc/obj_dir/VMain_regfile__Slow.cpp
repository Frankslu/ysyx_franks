// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_regfile.h"

void VMain_regfile___ctor_var_reset(VMain_regfile* vlSelf);

VMain_regfile::VMain_regfile(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_regfile___ctor_var_reset(this);
}

void VMain_regfile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_regfile::~VMain_regfile() {
}
