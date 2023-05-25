// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAIN__SYMS_H_
#define VERILATED_VMAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMain.h"

// INCLUDE MODULE CLASSES
#include "VMain___024root.h"
#include "VMain_Main.h"
#include "VMain_d_mem.h"
#include "VMain_mycpu_top.h"
#include "VMain_i_mem.h"
#include "VMain_preIF.h"
#include "VMain_IF_stage.h"
#include "VMain_ID_stage.h"
#include "VMain_EX_stage.h"
#include "VMain_MEM_stage.h"
#include "VMain_WB_stage.h"
#include "VMain_regfile.h"
#include "VMain_ALU.h"
#include "VMain_npc_break.h"
#include "VMain_Difftest.h"
#include "VMain_Exec.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VMain__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMain* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMain___024root                TOP;
    VMain_Main                     TOP__Main;
    VMain_mycpu_top                TOP__Main__cpucore;
    VMain_EX_stage                 TOP__Main__cpucore__EXE;
    VMain_ALU                      TOP__Main__cpucore__EXE__alu;
    VMain_ID_stage                 TOP__Main__cpucore__ID;
    VMain_regfile                  TOP__Main__cpucore__ID__reg_;
    VMain_Difftest                 TOP__Main__cpucore__ID__reg___difftest;
    VMain_Exec                     TOP__Main__cpucore__ID__reg___inst_exec_once;
    VMain_npc_break                TOP__Main__cpucore__ID__reg___npc_brk;
    VMain_IF_stage                 TOP__Main__cpucore__IF;
    VMain_MEM_stage                TOP__Main__cpucore__MEM;
    VMain_WB_stage                 TOP__Main__cpucore__WB;
    VMain_preIF                    TOP__Main__cpucore__pIF;
    VMain_d_mem                    TOP__Main__dram;
    VMain_i_mem                    TOP__Main__iram;

    // CONSTRUCTORS
    VMain__Syms(VerilatedContext* contextp, const char* namep, VMain* modelp);
    ~VMain__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
