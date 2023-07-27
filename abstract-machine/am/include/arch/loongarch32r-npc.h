#ifndef __ARCH_H__
#define __ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], estat, prmd, era;
  void *pdir;
};

#define GPR1 gpr[11] // a7
#define GPR2 gpr[4]  // a0
#define GPR3 gpr[5]  // a1
#define GPR4 gpr[6]  // a2
#define GPRx gpr[4]  // a0

#endif
