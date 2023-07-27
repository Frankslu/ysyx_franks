#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void tag(){
}

size_t strlen(const char *s)
{
#ifdef SANITIZER
	assert(s);
#endif

	register const char *s1 = s;
	while (*(s1++) != '\0');

	return s1 - s - 1;
}

char *strcpy(char *dst, const char *src)
{
#ifdef SANITIZER
	assert(dst && src);
#endif

	// register char *x = dst;
	// while ((*x = *(src++))) x++;

	register size_t i = 0;
	while ((dst[i] = src[i]) != '\0')
		i++;

	// for (int i = 0; (dst[i] = src[i]); i++);


	// register char val = 0;
	// register char *d = 0;
	// asm volatile (
	// 	"move %[d], %[dst]\n\t"
	// 	"b 1f\n\t"
	// 	"2: addi.w %[src], %[src], 1\n\t"
	// 	"addi.w %[d], %[d], 1\n\t"
	// 	"1: ld.bu %[val], %[src], 0\n\t"
	// 	"st.b %[val], %[d], 0\n\t"
	// 	"bne %[val], $r0, 2b\n\t"
	// 	:
	// 	: [src] "r"(src), [val]"r"(val), [d]"r"(d), [dst]"r"(dst)
	// 	);
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
#ifdef SANITIZER
	assert(dst && src);
#endif

	register size_t i = 0;
	// register char *dst1 = dst;
	// while (i++ < n && (*dst1 = *src) != '\0'){
	// 	dst1++;
	// 	src++;
	// }
	while (i < n && (dst[i] = src[i]) != '\0') i++;

	while (i < n) dst[i++] = '\0';

	return dst;
}

char *strcat(char *dst, const char *src)
{
#ifdef SANITIZER
	assert(dst && src);
#endif

	register char *dst1 = dst;
	while (*dst1 != '\0'){
		dst1++;
	}

	// for (; src[j] != '\0'; j++){
	// 	dst[i + j] = src[j];
	// }
	// dst[i + j] = '\0';
	while ((*(dst1++) = *(src++)) != '\0');

	return dst;
}

int strcmp(const char *s1, const char *s2)
{
#ifdef SANITIZER
	assert(s1 && s2);
#endif

	// int c;
	// size_t i = 0;
	// for (; s1[i] != '\0' && s2[i] != '\0'; i++){
	// 	c = (int)s1[i] - (int)s2[i];
	// 	if (c != 0){
	// 		return c;
	// 	}
	// }
	// c = (int)s1[i] - (int)s2[i];

	while (*s1 == *s2 && *s1){
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
#ifdef SANITIZER
	assert(s1 && s2);
#endif
	if (n == 0)
		return 0;

	while (--n != 0 && *s1 == *s2 && *s1){
		s1++;
		s2++;
	}

	return *s1 - *s2;

	// if (n == 0)
	// 	return 0;

	// int c;
	// size_t i = 0;
	// for (; s1[i] != '\0' && s2[i] != '\0' && i < n - 1; i++){
	// 	c = s1[i] - s2[i];
	// 	if (c != 0){
	// 		return c;
	// 	}
	// }

	// return s1[i] - s2[i];
}

void *memset(void *s, int c, size_t n)
{
#ifdef SANITIZER
	assert(s);
#endif

	register char *string = (char *)s;
	if (n < 8)
		goto NORMAL;

	register char s1 = (unsigned char)c;
	register uint16_t s2 = s1 | s1 << 8;
	register uint32_t s3 = s2 | s2 << 16;
	// for (size_t i = 0; i < n; i++){
	// 	string[i] = s1;
	// }
	if ((uintptr_t)s % 4 == 1){
		*string++ = s1;
		*(uint16_t *)string = s2;
		string += 2;
		n -= 3;
	}
	else if ((uintptr_t)s % 4 == 2){
		*(uint16_t *)string = s2;
		string += 2;
		n -= 2;
	}
	else if ((uintptr_t)s % 4 == 3){
		*string++ = s1;
		n -= 1;
	}

	while (n >= 4){
		*(uint32_t *)string = s3;
		string += 4;
		n -= 4;
	}

	if (n == 3){
		*(uint16_t *)string = s2;
		string += 2;
		*string = s1;
	}
	else if (n == 2){
		*(uint16_t *)string = s2;
	}
	else if (n == 1){
		*string = s1;
	}


	return s;
	// assert(s);

NORMAL:;
	for (size_t i = 0; i < n; i++){
		string[i] = (unsigned char)c;
	}

	return s;
}

void *memmove(void *dst, const void *src, size_t n)
{
#ifdef SANITIZER
	assert(dst && src);
#endif

	if (dst < src || dst >= src + n){
		register char *src1 = (char *)src;
		register char *dst1 = (char *)dst;
		while (n-- != 0){
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	else if (dst > src && dst < src + n){
		register char *src1 = (char *)(src + n - 1);
		register char *dst1 = (char *)(dst + n - 1);
		while (n-- != 0){
			*dst1 = *src1;
			dst1--;
			src1--;
		}
	}

	return dst;
}

void *memcpy(void *out, const void *in, size_t n)
{
#ifdef SANITIZER
	assert(out && in);
#endif
	// intptr_t offset = out - in;
	// if (offset % 4 == 0){

	// }
	register char *src1 = (char *)in;
	register char *dst1 = (char *)out;
	register size_t offset = (uintptr_t)out - (uintptr_t)in;
	if (n < 8 || offset % 2 != 0){
		while (n-- != 0){
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	else{
		if (offset % 4 == 0){
			if ((uintptr_t)src1 % 4 == 1){
				*dst1 = *src1;
				*(uint16_t *)(dst1 + 1) = *(uint16_t *)(src1 + 1);
				dst1 += 3; src1 += 3;
				n -= 3;
			}
			else if ((uintptr_t)src1 % 4 == 2){
				*(uint16_t *)dst1 = *(uint16_t *)src1;
				dst1 += 2; src1 += 2;
				n -= 2;
			}
			else if ((uintptr_t)src1 % 4 == 3){
				*dst1 = *src1;
				dst1++; src1++;
				n -= 1;
			}

			while (n >= 4){
				*(uint32_t *)dst1 = *(uint32_t *)src1;
				dst1 += 4; src1 += 4;
				n -= 4;
			}

			if (n == 3){
				*(uint16_t *)dst1 = *(uint16_t *)src1;
				*(dst1 + 2) = *(src1 + 2);
			}
			else if (n == 2){
				*(uint16_t *)dst1 = *(uint16_t *)src1;
			}
			else if (n == 1){
				*dst1 = *src1;
			}
		}
		else if (offset % 2 == 0){
			if ((uintptr_t)src1 % 2 == 1){
				*dst1 = *src1;
				dst1++; src1++;
				n -= 1;
			}
			
			while (n >= 2){
				*(uint16_t *)dst1 = *(uint16_t *)src1;
				dst1 += 2; src1 += 2;
				n -= 2;
			}

			if (n == 1){
				*dst1 = *src1;
			}
		}
	}

	return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
#ifdef SANITIZER
	assert(s1 && s2);
#endif
	if (n == 0)
		return 0;

	while (--n != 0 && *(char *)s1 == *(char *)s2){
		(char *)s1++;
		(char *)s2++;
	}

	return *(char *)s1 - *(char *)s2;
}

#endif
