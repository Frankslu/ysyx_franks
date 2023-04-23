#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// void put_int(int d){

// }

// int printf(const char *fmt, ...) {
// 	if (fmt == NULL){
// 		return -1;
// 	}

// 	va_list args;
// 	va_start(args, fmt);
// 	int d;
// 	char c;
// 	char *s = ;

// 	size_t i = 0;
// 	while (fmt[i] != '\0'){
// 		if (fmt[i] == '%'){
// 			i++;
// 			switch (fmt[i]){
// 				case 'd':
// 					d = va_arg(args, int);
// 					put_int(d);
// 			}
// 		}
// 		else {
// 			putch(fmt[i]);
// 		}
// 		i++;
// 	}
// }

int vsprintf(char *out, const char *fmt, va_list ap) {
	panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
