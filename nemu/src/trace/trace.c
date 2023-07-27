#include <trace/trace.h>

void iring_init();
void mring_init();
void fring_init();
void dring_init();
void ering_init();
void sring_init();

void init_trace(){
	IFDEF(CONFIG_IRING, iring_init());
	IFDEF(CONFIG_MTRACE, mring_init());
	IFDEF(CONFIG_FTRACE, fring_init());
	IFDEF(CONFIG_DTRACE, dring_init());
	IFDEF(CONFIG_ETRACE, ering_init());
	IFDEF(CONFIG_STRACE, sring_init());
}
