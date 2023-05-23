# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMain.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VMain \
	VMain___024root__DepSet_hda8ec1d0__0 \
	VMain___024root__DepSet_h3502859f__0 \
	VMain_Main__DepSet_hebaca4da__0 \
	VMain_d_mem__DepSet_ha86af6f4__0 \
	VMain_d_mem__DepSet_hc7667883__0 \
	VMain_mycpu_top__DepSet_h44b723d8__0 \
	VMain_i_mem__DepSet_he25a1c22__0 \
	VMain_i_mem__DepSet_h0d55d231__0 \
	VMain_preIF__DepSet_hb1be6c35__0 \
	VMain_IF_stage__DepSet_hbdd4086c__0 \
	VMain_ID_stage__DepSet_had495d01__0 \
	VMain_ID_stage__DepSet_h013e9fe8__0 \
	VMain_EX_stage__DepSet_h1d03e947__0 \
	VMain_MEM_stage__DepSet_h45d6c94d__0 \
	VMain_WB_stage__DepSet_hc2b623c4__0 \
	VMain_regfile__DepSet_hc9094f5e__0 \
	VMain_regfile__DepSet_h2888ff1d__0 \
	VMain_ALU__DepSet_h20208602__0 \
	VMain_npc_break__DepSet_hccd5a953__0 \
	VMain_npc_break__DepSet_h22dd1d20__0 \
	VMain_Difftest__DepSet_h165c0760__0 \
	VMain_Difftest__DepSet_hdd3b0221__0 \
	VMain_Exec__DepSet_h0f4b0491__0 \
	VMain_Exec__DepSet_h0a29145c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMain___024root__Slow \
	VMain___024root__DepSet_hda8ec1d0__0__Slow \
	VMain___024root__DepSet_h3502859f__0__Slow \
	VMain_Main__Slow \
	VMain_Main__DepSet_h224a182e__0__Slow \
	VMain_Main__DepSet_hebaca4da__0__Slow \
	VMain_d_mem__Slow \
	VMain_d_mem__DepSet_hc7667883__0__Slow \
	VMain_mycpu_top__Slow \
	VMain_mycpu_top__DepSet_h44b723d8__0__Slow \
	VMain_mycpu_top__DepSet_hab3aa397__0__Slow \
	VMain_i_mem__Slow \
	VMain_i_mem__DepSet_h0d55d231__0__Slow \
	VMain_preIF__Slow \
	VMain_preIF__DepSet_hb1be6c35__0__Slow \
	VMain_IF_stage__Slow \
	VMain_IF_stage__DepSet_hbdd4086c__0__Slow \
	VMain_ID_stage__Slow \
	VMain_ID_stage__DepSet_had495d01__0__Slow \
	VMain_ID_stage__DepSet_h013e9fe8__0__Slow \
	VMain_EX_stage__Slow \
	VMain_EX_stage__DepSet_h90eb7e32__0__Slow \
	VMain_EX_stage__DepSet_h1d03e947__0__Slow \
	VMain_MEM_stage__Slow \
	VMain_MEM_stage__DepSet_h45d6c94d__0__Slow \
	VMain_WB_stage__Slow \
	VMain_WB_stage__DepSet_hc2b623c4__0__Slow \
	VMain_regfile__Slow \
	VMain_regfile__DepSet_hc9094f5e__0__Slow \
	VMain_regfile__DepSet_h2888ff1d__0__Slow \
	VMain_ALU__Slow \
	VMain_ALU__DepSet_h20208602__0__Slow \
	VMain_npc_break__Slow \
	VMain_npc_break__DepSet_h22dd1d20__0__Slow \
	VMain_Difftest__Slow \
	VMain_Difftest__DepSet_h165c0760__0__Slow \
	VMain_Exec__Slow \
	VMain_Exec__DepSet_h0f4b0491__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMain__Dpi \
	VMain__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMain__Syms \
	VMain__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
