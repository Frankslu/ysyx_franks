// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexample__Syms.h"


void Vexample___024root__traceInitSub0(Vexample___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vexample___024root__traceInitTop(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vexample___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vexample___024root__traceInitSub0(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+1,"example a", false,-1);
        tracep->declBit(c+2,"example b", false,-1);
        tracep->declBit(c+3,"example c", false,-1);
    }
}

void Vexample___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vexample___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vexample___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vexample___024root__traceRegister(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vexample___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vexample___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vexample___024root__traceCleanup, vlSelf);
    }
}

void Vexample___024root__traceFullSub0(Vexample___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vexample___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vexample___024root* const __restrict vlSelf = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vexample___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vexample___024root__traceFullSub0(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->c));
    }
}
