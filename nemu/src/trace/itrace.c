#include "trace/trace.h"
#include <stdio.h>

#ifdef CONFIG_IRING
__attribute__((unused)) static Iring_t iring;

void iring_init(){
	for (int i=0; i<IRING_BUFSIZE; i++){
		iring.buf[i][0] = '\0';
	}
	iring.pos = 0;
}

void iring_write(char *_buf){
	strcpy(iring.buf[iring.pos], _buf);
	iring.pos = iring.pos == (IRING_BUFSIZE - 1) ? 0 : (iring.pos + 1);
}

void display_iring(){
	int pos = iring.pos;
	for (int i=0; i<IRING_BUFSIZE; i++){
		if (iring.buf[pos][0] != '\0'){
			printf("%s\n", iring.buf[pos]);
		}
		pos = pos == (IRING_BUFSIZE - 1) ? 0 : (pos + 1);
	}
}
#endif