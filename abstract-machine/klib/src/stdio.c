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
	char string[2048];
	char *s;

	size_t i = 0;
	while (fmt[i] != '\0'){
		if (fmt[i] == '%'){
			i++;
			switch (fmt[i]){
				case 'd':
					d = va_arg(args, int);
					itoa(s1, d, 10);
					memcpy(string + len, s1, strlen(s1));
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(args, char *);
					memcpy(string + len, s, strlen(s));
					len += strlen(s);
					break;
				case 'c':
					c = (char)va_arg(args, int);
					string[len] = c;
					len++;
					break;
			}
		}
		else {
			string[len] = fmt[i];
			len++;
		}
		i++;
	}

	return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
