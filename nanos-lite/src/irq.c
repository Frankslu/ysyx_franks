#include <common.h>

static Context *do_event(Event e, Context *c) {
	switch (e.event) {
	case EVENT_YIELD:
		printf("The fucking exception is yield\n");
		c->era += 4;
		break;
	default: panic("Unhandled event ID = %d", e.event);
	}

	return c;
}

void init_irq(void) {
	Log("Initializing interrupt/exception handler...");
	cte_init(do_event);
}
