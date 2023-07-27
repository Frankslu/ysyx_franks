#include <common.h>
// #include "syscall.h"
#include "fs.h"

static inline void sys_yeild(Context *c){
	yield();
	c->GPRx = 0;
}

static inline void sys_write(Context *c){
	if ((int)(c->GPR2) == 1 || (int)(c->GPR2) == 2){
		for (size_t i = 0; i < (size_t)c->GPR4; i++){
			putch(((char *)(c->GPR3))[i]);
		}
	}
	else{
		fs_write((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
	}
	c->GPRx = c->GPR4;
}

static inline void sys_brk(Context *c){
	c->GPRx = 0;
}

static inline void sys_open(Context *c){
	c->GPRx = fs_open((char *)c->GPR2, (int)c->GPR3, (int)c->GPR4);
}

static inline void sys_read(Context *c){
	c->GPRx = fs_read((int)c->GPR2, (void *)c->GPR3, (size_t)c->GPR4);
}

static inline void sys_close(Context *c){
	c->GPRx = fs_close((int)c->GPR2);
}

static inline void sys_lseek(Context *c){
	c->GPRx = fs_lseek((int)c->GPR2, (size_t)c->GPR3, (int)c->GPR4);
}

void do_syscall(Context *c) {
	uintptr_t a[4];
	a[0] = c->GPR1;

	switch (a[0]) {
		case SYS_yield:		sys_yeild(c);	break;
		case SYS_write:		sys_write(c);	break;
		case SYS_brk:		sys_brk(c);		break;
		case SYS_open:		sys_open(c);	break;
		case SYS_read:		sys_read(c);	break;
		case SYS_close:		sys_close(c);	break;
		case SYS_lseek:		sys_lseek(c);	break;
		default: panic("Unhandled syscall ID = %d", a[0]);
	}
}

