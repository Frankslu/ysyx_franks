// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_npc_break.h"

void VMain_npc_break___ctor_var_reset(VMain_npc_break* vlSelf);

VMain_npc_break::VMain_npc_break(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_npc_break___ctor_var_reset(this);
}

void VMain_npc_break::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_npc_break::~VMain_npc_break() {
}
