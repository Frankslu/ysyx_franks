// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain_d_mem.h"

extern "C" void vaddr_read(int raddr, int* rdata);

VL_INLINE_OPT void VMain_d_mem____Vdpiimwrap_vaddr_read_TOP__Main__dram(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_d_mem____Vdpiimwrap_vaddr_read_TOP__Main__dram\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    vaddr_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void vaddr_write(int waddr, int wdata, char wmask, int* rdata);

VL_INLINE_OPT void VMain_d_mem____Vdpiimwrap_vaddr_write_TOP__Main__dram(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_d_mem____Vdpiimwrap_vaddr_write_TOP__Main__dram\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    int rdata__Vcvt;
    vaddr_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}
