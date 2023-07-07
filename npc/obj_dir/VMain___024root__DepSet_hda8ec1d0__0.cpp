// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle regs);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int regs__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    set_gpr_ptr(&regs__Vopenarray);
}

extern "C" void set_csr_ptr(const svOpenArrayHandle regs);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 5> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__difftest__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int regs__Vopenprops__ulims[2] = {0, 4};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    set_csr_ptr(&regs__Vopenarray);
}

extern "C" void npc_break(char is_break);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP(CData/*7:0*/ is_break) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__npc_brk__DOT__npc_break_TOP\n"); );
    // Body
    char is_break__Vcvt;
    for (size_t is_break__Vidx = 0; is_break__Vidx < 1; ++is_break__Vidx) is_break__Vcvt = is_break;
    npc_break(is_break__Vcvt);
}

extern "C" void inst_exec_once(char valid, char inv, int inst, int pc);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP(CData/*7:0*/ valid, CData/*7:0*/ inv, IData/*31:0*/ inst, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__inst_exec_once_TOP\n"); );
    // Body
    char valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    char inv__Vcvt;
    for (size_t inv__Vidx = 0; inv__Vidx < 1; ++inv__Vidx) inv__Vcvt = inv;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    inst_exec_once(valid__Vcvt, inv__Vcvt, inst__Vcvt, pc__Vcvt);
}

extern "C" void record_exception(char ex, char ertn, int ecode, int esubcode, int pc);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_exception_TOP(CData/*7:0*/ ex, CData/*7:0*/ ertn, IData/*31:0*/ ecode, IData/*31:0*/ esubcode, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__cpucore__DOT__ID__DOT__reg___DOT__inst_exec_once__DOT__record_exception_TOP\n"); );
    // Body
    char ex__Vcvt;
    for (size_t ex__Vidx = 0; ex__Vidx < 1; ++ex__Vidx) ex__Vcvt = ex;
    char ertn__Vcvt;
    for (size_t ertn__Vidx = 0; ertn__Vidx < 1; ++ertn__Vidx) ertn__Vcvt = ertn;
    int ecode__Vcvt;
    for (size_t ecode__Vidx = 0; ecode__Vidx < 1; ++ecode__Vidx) ecode__Vcvt = ecode;
    int esubcode__Vcvt;
    for (size_t esubcode__Vidx = 0; esubcode__Vidx < 1; ++esubcode__Vidx) esubcode__Vcvt = esubcode;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    record_exception(ex__Vcvt, ertn__Vcvt, ecode__Vcvt, esubcode__Vcvt, pc__Vcvt);
}

extern "C" void vaddr_read(int raddr, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    vaddr_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void vaddr_write(int waddr, int wdata, char wmask, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__dram__DOT__vaddr_write_TOP\n"); );
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

extern "C" void vaddr_fetch(int raddr, int* rdata);

VL_INLINE_OPT void VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root____Vdpiimwrap_Main__DOT__iram__DOT__vaddr_fetch_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    vaddr_fetch(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__ico(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval_triggers__ico(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMain___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval_triggers__act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMain___024root___dump_triggers__act(vlSelf);
    }
#endif
}
