// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRDMEM__SYMS_H_
#define VERILATED_VRDMEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrdmem.h"

// INCLUDE MODULE CLASSES
#include "Vrdmem___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vrdmem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrdmem* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrdmem___024root               TOP;

    // CONSTRUCTORS
    Vrdmem__Syms(VerilatedContext* contextp, const char* namep, Vrdmem* modelp);
    ~Vrdmem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
