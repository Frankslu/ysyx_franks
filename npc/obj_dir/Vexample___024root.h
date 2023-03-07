// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexample.h for the primary calling header

#ifndef VERILATED_VEXAMPLE___024ROOT_H_
#define VERILATED_VEXAMPLE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vexample__Syms;

//----------

VL_MODULE(Vexample___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT16(led,15,0);

    // LOCAL SIGNALS
    IData/*31:0*/ light__DOT__count;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vexample__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vexample___024root);  ///< Copying not allowed
  public:
    Vexample___024root(const char* name);
    ~Vexample___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vexample__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
