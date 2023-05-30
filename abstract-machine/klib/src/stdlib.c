#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
	// RAND_MAX assumed to be 32767
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
	next = seed;
}

int abs(int x) {
	return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
	int x = 0;
	while (*nptr == ' ') { nptr ++; }
	while (*nptr >= '0' && *nptr <= '9') {
		x = x * 10 + *nptr - '0';
		nptr ++;
	}
	return x;
}

void itoa(char *s, int num, int binary){
	char tmp;
	int i = 0, a;

	if (binary <= 10){
		while (num != 0){
			s[i] = (char)(num % binary + '0');
			num /= binary;
			i++;
		}
	}
	else {
		while (num != 0){
			a = num % binary;
			if (a < 10){
				s[i] = (char)(a + '0');
			}
			else {
				s[i] = (char)(a - 10 + 'a');
			}
			num /= binary;
			i++;
		}
	}

	s[i] = '\0';

	for (int j=0; j < i-1-j; j++){
		tmp = s[j];
		s[j] = s[i-1-j];
		s[i-1-j] = tmp;
	}
}

static char *addr = NULL;

void *malloc(size_t size) {
	// On native, malloc() will be called during initializaion of C runtime.
	// Therefore do not call panic() here, else it will yield a dead recursion:
	//   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
	if (addr == NULL)
		addr = (void *)heap.start;

	char *old = addr;
	addr += size;
	assert((uintptr_t)heap.start <= (uintptr_t)addr && (uintptr_t)addr < (uintptr_t)heap.end);
		
	return old;
#endif
	return NULL;
}

void free(void *ptr) {
}

#endif
