// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMYCPU_TOP__SYMS_H_
#define VERILATED_VMYCPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmycpu_top.h"

// INCLUDE MODULE CLASSES
#include "Vmycpu_top___024root.h"

// SYMS CLASS (contains all model state)
class Vmycpu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmycpu_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmycpu_top___024root           TOP;

    // CONSTRUCTORS
    Vmycpu_top__Syms(VerilatedContext* contextp, const char* namep, Vmycpu_top* modelp);
    ~Vmycpu_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
