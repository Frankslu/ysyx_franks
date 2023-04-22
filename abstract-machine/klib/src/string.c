#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
	// assert(s);

	size_t i = 0;
	while (s[i] != '\0'){
		i++;
	}

	return i;
}

char *strcpy(char *dst, const char *src)
{
	// assert(dst && src);

	size_t i = 0;
	for (; src[i] != '\0'; i++){
		dst[i] = src[i];
	}
	dst[i] = '\0';

	return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
	// assert(dst && src);

	size_t i = 0;
	for (; i < n && src[i] != '\0'; i++){
		dst[i] = src[i];
	}

	for (; i < n; i++){
		dst[i] = '\0';
	}

	return dst;
}

char *strcat(char *dst, const char *src)
{
	// assert(dst && src);

	size_t i = 0;
	size_t j = 0;
	while (dst[i] != '\0'){
		i++;
	}

	for (; src[j] != '\0'; i++){
		dst[i + j] = src[j];
	}
	dst[i + j] = '\0';

	return dst;
}

int strcmp(const char *s1, const char *s2)
{
	// assert(s1 && s2);

	int c;
	size_t i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0'; i++){
		c = (int)s1[i] - (int)s2[i];
		if (c != 0){
			return c;
		}
	}

	c = (int)s1[i] - (int)s2[i];
	return c;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
	// assert(s1 && s2);

	int c;
	size_t i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0' && i < n - 1; i++){
		c = (int)s1[i] - (int)s2[i];
		if (c != 0){
			return c;
		}
	}

	return (int)s1[i] - (int)s2[i];
}

void *memset(void *s, int c, size_t n)
{
	// assert(s);

	char a = (unsigned char)c;
	char *string = (char *)s;
	for (size_t i = 0; i < n; i++){
		string[i] = a;
	}

	return (void *)string;
}

void *memmove(void *dst, const void *src, size_t n)
{
	// assert(dst && src);

	char *src1 = (char *)src;
	char *dst1 = (char *)dst;
	for (size_t i = 0; i < n; i++){
		dst1[i] = src1[i];
	}

	return (void *)dst1;
}

void *memcpy(void *out, const void *in, size_t n)
{
	// assert(out && in);

	char *out1 = (char *)out;
	char *in1 = (char *)in;
	for (size_t i = 0; i < n; i++){
		out1[i] = in1[i];
	}

	return (void *)out1;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
	// assert(s1 && s2);

	int c;
	size_t i = 0;
	int *a1 = (int *)s1;
	int *a2 = (int *)s2;
	for ( ; i < n; i++){
		c = a1[i] - a2[i];
		if (c != 0){
			return c;
		}
	}

	return 0;
}

#endif
