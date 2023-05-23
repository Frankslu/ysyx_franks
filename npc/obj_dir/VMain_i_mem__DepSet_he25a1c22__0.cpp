// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_i_mem.h"

extern "C" void vaddr_fetch(int raddr, int* rdata);

VL_INLINE_OPT void VMain_i_mem____Vdpiimwrap_vaddr_fetch_TOP__Main__iram(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_i_mem____Vdpiimwrap_vaddr_fetch_TOP__Main__iram\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    vaddr_fetch(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}
