// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN_NPC_BREAK_H_
#define VERILATED_VMAIN_NPC_BREAK_H_  // guard

#include "verilated.h"

class VMain__Syms;

class VMain_npc_break final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__is_break,0,0);

    // INTERNAL VARIABLES
    VMain__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMain_npc_break(VMain__Syms* symsp, const char* v__name);
    ~VMain_npc_break();
    VL_UNCOPYABLE(VMain_npc_break);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
