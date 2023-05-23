#include <dlfcn.h>

#include "cpu/decode.h"
#include "cpu/cpu.h"
#include "paddr.h"
#include "utils.h"
#include "difftest.h"

#ifdef CONFIG_DIFFTEST


typedef void (*ref_difftest_memcpy_t)(paddr_t, void *, size_t, bool);
ref_difftest_memcpy_t ref_difftest_memcpy = NULL;
typedef void (*ref_difftest_regcpy_t)(void *, bool);
ref_difftest_regcpy_t ref_difftest_regcpy = NULL;
typedef void (*ref_difftest_exec_t)(uint64_t);
ref_difftest_exec_t ref_difftest_exec = NULL;
typedef void (*ref_difftest_raise_intr_t)(uint64_t);
ref_difftest_raise_intr_t ref_difftest_raise_intr = NULL;
typedef bool (*ref_difftest_regcmp_t)(void *);
ref_difftest_regcmp_t ref_difftest_regcmp = NULL;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
	is_skip_ref = true;
	// If such an instruction is one of the instruction packing in QEMU
	// (see below), we end the process of catching up with QEMU's pc to
	// keep the consistent behavior in our best.
	// Note that this is still not perfect: if the packed instructions
	// already write some memory, and the incoming instruction in NEMU
	// will load that memory, we will encounter false negative. But such
	// situation is infrequent.
	skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
	skip_dut_nr_inst += nr_dut;

	while (nr_ref -- > 0) {
		ref_difftest_exec(1);
	}
}

void init_difftest(const char *_so_file, int img_size){
	char ref_so_file[] = "/home/franks/ysyx-workbench/nemu/build/loongarch32r-nemu-interpreter-so";
	printf("%s\n", ref_so_file);
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	ref_difftest_memcpy = (ref_difftest_memcpy_t)dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (ref_difftest_regcpy_t)dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (ref_difftest_exec_t)dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = (ref_difftest_raise_intr_t)dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	void (*ref_difftest_init)() = (void (*)())dlsym(handle, "difftest_init");
	assert(ref_difftest_init);

	ref_difftest_regcmp = (ref_difftest_regcmp_t)dlsym(handle, "difftest_regcmp");
	assert(ref_difftest_regcmp);

	Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
	Log("The result of every instruction will be compared with %s. "
			"This will help you a lot for debugging, but also significantly reduce the performance. "
			"If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

	ref_difftest_init();
	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	vaddr_t n_pc = cpu.pc;
	cpu.pc = CONFIG_MBASE;
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	printf("npc pc = %x\n", cpu.pc);
	cpu.pc = n_pc;
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
	ref_difftest_exec(1);

	if (ref_difftest_regcmp(&cpu) == false) {
		npc_state.state = NPC_ABORT;
		npc_state.halt_pc = pc;
//  	isa_reg_display();
	}
}
#else
static void trace_and_difftest(Decode *_this, vaddr_t dnpc){ }
#endif