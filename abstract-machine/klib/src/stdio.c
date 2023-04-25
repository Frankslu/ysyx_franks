#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
	
	panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	if (fmt == NULL){
		return -1;
	}

	va_list args;
	va_start(args, fmt);

	int len = 0;
	int d;
	char c;
	char s1[33];
	char *s;

	size_t i = 0;
	while (fmt[i] != '\0'){
		if (fmt[i] == '%'){
			i++;
			switch (fmt[i]){
				case 'd':
					d = va_arg(args, int);
					itoa(s1, d, 10);
					memcpy(out + len, s1, strlen(s1));
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(args, char *);
					memcpy(out + len, s, strlen(s));
					len += strlen(s);
					break;
				case 'c':
					c = (char)va_arg(args, int);
					out[len] = c;
					len++;
					break;
			}
		}
		else {
			out[len] = fmt[i];
			len++;
		}
		i++;
	}
	out[len] = '\0';

	return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
