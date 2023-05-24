// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

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

VL_INLINE_OPT void VMain___024root___ico_sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__Main.clock = vlSelf->clock;
    vlSymsp->TOP__Main.reset = vlSelf->reset;
}

void VMain_Main___ico_sequent__TOP__Main__0(VMain_Main* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__0(VMain_ID_stage* vlSelf);
void VMain_preIF___ico_sequent__TOP__Main__cpucore__pIF__0(VMain_preIF* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__1(VMain_mycpu_top* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__1(VMain_Main* vlSelf);
void VMain_i_mem___ico_sequent__TOP__Main__iram__0(VMain_i_mem* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__2(VMain_Main* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__2(VMain_mycpu_top* vlSelf);
void VMain_IF_stage___ico_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__3(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__4(VMain_mycpu_top* vlSelf);
void VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf);
void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf);
void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__2(VMain_ID_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__5(VMain_mycpu_top* vlSelf);
void VMain_ALU___ico_sequent__TOP__Main__cpucore__EXE__alu__0(VMain_ALU* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__3(VMain_Main* vlSelf);
void VMain_MEM_stage___ico_sequent__TOP__Main__cpucore__MEM__0(VMain_MEM_stage* vlSelf);
void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__6(VMain_mycpu_top* vlSelf);
void VMain_ALU___ico_sequent__TOP__Main__cpucore__EXE__alu__1(VMain_ALU* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__4(VMain_Main* vlSelf);
void VMain_WB_stage___ico_sequent__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf);
void VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__2(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__7(VMain_mycpu_top* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__5(VMain_Main* vlSelf);
void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__3(VMain_ID_stage* vlSelf);
void VMain_d_mem___ico_sequent__TOP__Main__dram__0(VMain_d_mem* vlSelf);
void VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf);
void VMain_Main___ico_sequent__TOP__Main__6(VMain_Main* vlSelf);
void VMain_Exec___ico_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0(VMain_Exec* vlSelf);
void VMain_npc_break___ico_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0(VMain_npc_break* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__8(VMain_mycpu_top* vlSelf);
void VMain_MEM_stage___ico_sequent__TOP__Main__cpucore__MEM__1(VMain_MEM_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__9(VMain_mycpu_top* vlSelf);
void VMain_WB_stage___ico_sequent__TOP__Main__cpucore__WB__1(VMain_WB_stage* vlSelf);
void VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__10(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__4(VMain_ID_stage* vlSelf);
void VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___2(VMain_regfile* vlSelf);

void VMain___024root___eval_ico(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMain___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VMain_Main___ico_sequent__TOP__Main__0((&vlSymsp->TOP__Main));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__0((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__0((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_preIF___ico_sequent__TOP__Main__cpucore__pIF__0((&vlSymsp->TOP__Main__cpucore__pIF));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__1((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___ico_sequent__TOP__Main__1((&vlSymsp->TOP__Main));
        VMain_i_mem___ico_sequent__TOP__Main__iram__0((&vlSymsp->TOP__Main__iram));
        VMain_Main___ico_sequent__TOP__Main__2((&vlSymsp->TOP__Main));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__2((&vlSymsp->TOP__Main__cpucore));
        VMain_IF_stage___ico_sequent__TOP__Main__cpucore__IF__0((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__3((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__1((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__4((&vlSymsp->TOP__Main__cpucore));
        VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___0((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__0((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__2((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__5((&vlSymsp->TOP__Main__cpucore));
        VMain_ALU___ico_sequent__TOP__Main__cpucore__EXE__alu__0((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_Main___ico_sequent__TOP__Main__3((&vlSymsp->TOP__Main));
        VMain_MEM_stage___ico_sequent__TOP__Main__cpucore__MEM__0((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__1((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__6((&vlSymsp->TOP__Main__cpucore));
        VMain_ALU___ico_sequent__TOP__Main__cpucore__EXE__alu__1((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_Main___ico_sequent__TOP__Main__4((&vlSymsp->TOP__Main));
        VMain_WB_stage___ico_sequent__TOP__Main__cpucore__WB__0((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_EX_stage___ico_sequent__TOP__Main__cpucore__EXE__2((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__7((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___ico_sequent__TOP__Main__5((&vlSymsp->TOP__Main));
        VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__3((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_d_mem___ico_sequent__TOP__Main__dram__0((&vlSymsp->TOP__Main__dram));
        VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___1((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_Main___ico_sequent__TOP__Main__6((&vlSymsp->TOP__Main));
        VMain_Exec___ico_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0((&vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once));
        VMain_npc_break___ico_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0((&vlSymsp->TOP__Main__cpucore__ID__reg___npc_brk));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__8((&vlSymsp->TOP__Main__cpucore));
        VMain_MEM_stage___ico_sequent__TOP__Main__cpucore__MEM__1((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__9((&vlSymsp->TOP__Main__cpucore));
        VMain_WB_stage___ico_sequent__TOP__Main__cpucore__WB__1((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___ico_sequent__TOP__Main__cpucore__10((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___ico_sequent__TOP__Main__cpucore__ID__4((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_regfile___ico_sequent__TOP__Main__cpucore__ID__reg___2((&vlSymsp->TOP__Main__cpucore__ID__reg_));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG

void VMain___024root___eval_triggers__act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSymsp->TOP__Main__cpucore__pIF.__PVT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__Main__cpucore__pIF____PVT__clock)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSymsp->TOP__Main__cpucore__ID__reg_.__PVT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__Main__cpucore__ID__reg_____PVT__clock)));
    vlSelf->__Vtrigrprev__TOP__Main__cpucore__pIF____PVT__clock 
        = vlSymsp->TOP__Main__cpucore__pIF.__PVT__clock;
    vlSelf->__Vtrigrprev__TOP__Main__cpucore__ID__reg_____PVT__clock 
        = vlSymsp->TOP__Main__cpucore__ID__reg_.__PVT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMain___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf);
void VMain_Difftest___nba_sequent__TOP__Main__cpucore__ID__reg___difftest__0(VMain_Difftest* vlSelf);
void VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__0(VMain_preIF* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf);
void VMain_Main___nba_sequent__TOP__Main__0(VMain_Main* vlSelf);
void VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__1(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__0(VMain_ID_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__2(VMain_mycpu_top* vlSelf);
void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__3(VMain_mycpu_top* vlSelf);
void VMain_MEM_stage___nba_sequent__TOP__Main__cpucore__MEM__0(VMain_MEM_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__4(VMain_mycpu_top* vlSelf);
void VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__5(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf);
void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf);
void VMain_i_mem___nba_sequent__TOP__Main__iram__0(VMain_i_mem* vlSelf);
void VMain_Main___nba_sequent__TOP__Main__1(VMain_Main* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__6(VMain_mycpu_top* vlSelf);
void VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__1(VMain_IF_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__7(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__2(VMain_ID_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__8(VMain_mycpu_top* vlSelf);
void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___2(VMain_regfile* vlSelf);
void VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__9(VMain_mycpu_top* vlSelf);
void VMain_ALU___nba_sequent__TOP__Main__cpucore__EXE__alu__0(VMain_ALU* vlSelf);
void VMain_Main___nba_sequent__TOP__Main__2(VMain_Main* vlSelf);
void VMain_MEM_stage___nba_sequent__TOP__Main__cpucore__MEM__1(VMain_MEM_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__10(VMain_mycpu_top* vlSelf);
void VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__1(VMain_WB_stage* vlSelf);
void VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__11(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__3(VMain_ID_stage* vlSelf);
void VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___3(VMain_regfile* vlSelf);
void VMain_Exec___nba_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0(VMain_Exec* vlSelf);
void VMain_npc_break___nba_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0(VMain_npc_break* vlSelf);
void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf);
void VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__0(VMain_ID_stage* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf);
void VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__1(VMain_mycpu_top* vlSelf);
void VMain_ALU___nba_comb__TOP__Main__cpucore__EXE__alu__0(VMain_ALU* vlSelf);
void VMain_Main___nba_comb__TOP__Main__0(VMain_Main* vlSelf);
void VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__2(VMain_mycpu_top* vlSelf);
void VMain_Main___nba_comb__TOP__Main__1(VMain_Main* vlSelf);
void VMain_d_mem___nba_comb__TOP__Main__dram__0(VMain_d_mem* vlSelf);
void VMain_Main___nba_comb__TOP__Main__2(VMain_Main* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__3(VMain_mycpu_top* vlSelf);
void VMain_MEM_stage___nba_comb__TOP__Main__cpucore__MEM__0(VMain_MEM_stage* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__4(VMain_mycpu_top* vlSelf);
void VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf);
void VMain_mycpu_top___nba_comb__TOP__Main__cpucore__5(VMain_mycpu_top* vlSelf);
void VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf);
void VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf);

void VMain___024root___eval_nba(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___0((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VMain_Difftest___nba_sequent__TOP__Main__cpucore__ID__reg___difftest__0((&vlSymsp->TOP__Main__cpucore__ID__reg___difftest));
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VMain_preIF___nba_sequent__TOP__Main__cpucore__pIF__0((&vlSymsp->TOP__Main__cpucore__pIF));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__0((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___nba_sequent__TOP__Main__0((&vlSymsp->TOP__Main));
        VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__0((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__1((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__0((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__2((&vlSymsp->TOP__Main__cpucore));
        VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__0((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__3((&vlSymsp->TOP__Main__cpucore));
        VMain_MEM_stage___nba_sequent__TOP__Main__cpucore__MEM__0((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__4((&vlSymsp->TOP__Main__cpucore));
        VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__0((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__5((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__1((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___1((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_i_mem___nba_sequent__TOP__Main__iram__0((&vlSymsp->TOP__Main__iram));
        VMain_Main___nba_sequent__TOP__Main__1((&vlSymsp->TOP__Main));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__6((&vlSymsp->TOP__Main__cpucore));
        VMain_IF_stage___nba_sequent__TOP__Main__cpucore__IF__1((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__7((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__2((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__8((&vlSymsp->TOP__Main__cpucore));
        VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___2((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_EX_stage___nba_sequent__TOP__Main__cpucore__EXE__1((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__9((&vlSymsp->TOP__Main__cpucore));
        VMain_ALU___nba_sequent__TOP__Main__cpucore__EXE__alu__0((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_Main___nba_sequent__TOP__Main__2((&vlSymsp->TOP__Main));
        VMain_MEM_stage___nba_sequent__TOP__Main__cpucore__MEM__1((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__10((&vlSymsp->TOP__Main__cpucore));
        VMain_WB_stage___nba_sequent__TOP__Main__cpucore__WB__1((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___nba_sequent__TOP__Main__cpucore__11((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___nba_sequent__TOP__Main__cpucore__ID__3((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_regfile___nba_sequent__TOP__Main__cpucore__ID__reg___3((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_Exec___nba_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0((&vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once));
        VMain_npc_break___nba_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0((&vlSymsp->TOP__Main__cpucore__ID__reg___npc_brk));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___0((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__0((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__0((&vlSymsp->TOP__Main__cpucore));
        VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__0((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__1((&vlSymsp->TOP__Main__cpucore));
        VMain_ALU___nba_comb__TOP__Main__cpucore__EXE__alu__0((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_Main___nba_comb__TOP__Main__0((&vlSymsp->TOP__Main));
        VMain_EX_stage___nba_comb__TOP__Main__cpucore__EXE__1((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__2((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___nba_comb__TOP__Main__1((&vlSymsp->TOP__Main));
        VMain_d_mem___nba_comb__TOP__Main__dram__0((&vlSymsp->TOP__Main__dram));
        VMain_Main___nba_comb__TOP__Main__2((&vlSymsp->TOP__Main));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__3((&vlSymsp->TOP__Main__cpucore));
        VMain_MEM_stage___nba_comb__TOP__Main__cpucore__MEM__0((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__4((&vlSymsp->TOP__Main__cpucore));
        VMain_WB_stage___nba_comb__TOP__Main__cpucore__WB__0((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___nba_comb__TOP__Main__cpucore__5((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___nba_comb__TOP__Main__cpucore__ID__1((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_regfile___nba_comb__TOP__Main__cpucore__ID__reg___1((&vlSymsp->TOP__Main__cpucore__ID__reg_));
    }
}
