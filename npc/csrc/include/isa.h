#ifndef __ISA_H__
#define __ISA_H__

#include <stdbool.h>
#include "common.h"

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} ISADecodeInfo;

typedef struct {
  word_t *gpr;
  vaddr_t pc;
  bool valid;
  word_t inst;
  bool is_break;
} npc_CPU_state;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

// monitor
// extern char isa_logo[];
// void init_isa();

// reg
extern npc_CPU_state cpu;

// exec

// memory
enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };
#ifndef isa_mmu_check
int isa_mmu_check(vaddr_t vaddr, int len, int type);
#endif
paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);

// interrupt/exception
vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);
#define INTR_EMPTY ((word_t)-1)
// word_t isa_query_intr();

// // difftest
bool isa_difftest_checkregs(npc_CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();

void isa_reg_display();

#endif
