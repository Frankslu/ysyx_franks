#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
	// RAND_MAX assumed to be 32767
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed) {
	next = seed;
}

int abs(int x) {
	return (x < 0 ? -x : x);
}

int atoi(const char *nptr) {
	int x = 0;
	while (*nptr == ' ') { nptr++; }
	while (*nptr >= '0' && *nptr <= '9') {
		x = x * 10 + *nptr - '0';
		nptr++;
	}
	return x;
}

void itoa(char *s, int num, int high_bits_0, int width){
	char tmp;
	int i = 0;
	char high_bits = high_bits_0 ? '0' : (char)32;

	if (num == 0){
		if (width == 0)
			width = 1;
		memset(s, high_bits, width);
		s[width - 1] = '0';
		s[width] = '\0';
		return;
	}

	while (num != 0){
		s[i] = (char)(num % 10 + '0');
		num /= 10;
		i++;
	}

	for (; i < width; i++)
		s[i] = high_bits;

	s[i] = '\0';

	for (int j = 0; j < i - 1 - j; j++){
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}

void utoa(char *s, unsigned long num, int high_bits_0, int width){
	char tmp;
	int i = 0;
	char high_bits = high_bits_0 ? '0' : (char)32;

	if (num == 0){
		if (width == 0)
			width = 1;
		memset(s, high_bits, width);
		s[width - 1] = '0';
		s[width] = '\0';
		return;
	}

	while (num != 0){
		s[i] = (char)(num % 10 + '0');
		num /= 10;
		i++;
	}

	for (; i < width; i++)
		s[i] = high_bits;

	s[i] = '\0';

	for (int j = 0; j < i - 1 - j; j++){
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}

void xtoa(char *s, unsigned int num, int high_bits_0, int width){
	char tmp;
	int i = 0;
	char high_bits = high_bits_0 ? '0' : (char)32;

	if (num == 0){
		if (width == 0)
			width = 1;
		memset(s, high_bits, width);
		s[width - 1] = '0';
		s[width] = '\0';
		return;
	}

	while (num != 0){
		s[i] = (char)(num % 16);
		if (s[i] < 10){
			s[i] += '0';
		}
		else{
			s[i] = s[i] - 10 + 'a';
		}
		num /= 16;
		i++;
	}

	for (; i < width; i++)
		s[i] = high_bits;

	s[i] = '\0';

	for (int j = 0; j < i - 1 - j; j++){
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}

void otoa(char *s, unsigned int num, int high_bits_0, int width){
	char tmp;
	int i = 0;
	char high_bits = high_bits_0 ? '0' : (char)32;

	if (num == 0){
		if (width == 0)
			width = 1;
		memset(s, high_bits, width);
		s[width - 1] = '0';
		s[width] = '\0';
		return;
	}

	while (num != 0){
		s[i] = (char)(num % 8 + '0');
		num /= 8;
		i++;
	}

	for (; i < width; i++)
		s[i] = high_bits;

	s[i] = '\0';

	for (int j = 0; j < i - 1 - j; j++){
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}

__attribute__((unused)) static char *addr = NULL;

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
