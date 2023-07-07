#include <am.h>
#include <loongarch/loongarch32r.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

enum ECODE{
	SYS = 0xB
};

Context *__am_irq_handle(Context *c) {
	if (user_handler) {
		Event ev = {0};
		uintptr_t ecode = (c->estat & 0x3f0000) >> 16;
		__attribute__((unused)) uintptr_t esubcode = (c->estat & 0x7fc0000) >> 22;
		if (ecode == SYS){
			if (c->GPR1 == -1){
				ev.event = EVENT_YIELD;
			}
		}

		// for (int i = 0; i < 32; i++){
		// 	printf("%08x\n", c->gpr[i]);
		// }
		c = user_handler(ev, c);
		assert(c != NULL);
	}

	return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
	// initialize exception entry
	asm volatile("csrwr %0, 0xc" : : "r"(__am_asm_trap));  // 0xc = eentry

	// register event handler
	user_handler = handler;

	return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	return NULL;
}

void yield() {
	asm volatile("li.w $a7, -1; syscall 0");
}

bool ienabled() {
	return false;
}

void iset(bool enable) {
}
