#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void int_to_char(int d, char s[]);

int printf(const char *fmt, ...) {
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
					int_to_char(d, s1);
					putstr(s1);
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(args, char *);
					putstr(s);
					len += strlen(s);
					break;
				case 'c':
					c = (char)va_arg(args, int);
					putch(c);
					len++;
					break;
			}
		}
		else {
			putch(fmt[i]);
			len++;
		}
		i++;
	}

	return len;
}

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

void int_to_char(int d, char s[]){
	char tmp;
	int i = 0;

	while (d != 0){
		s[i] = (char)(d % 10) - '0';
		d /= 10;
		i++;
	}

	s[i] = '\0';

	for (int j=0; j < (i-1-j); j++){
		tmp = s[i];
		s[i] = s[i-1-j];
		s[i-1-j] = tmp;
	}
}

#endif
