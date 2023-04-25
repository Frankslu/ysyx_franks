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
	if (fmt == NULL){
		return -1;
	}

	va_list args;
	va_start(args, fmt);

	int len = 0;
	int arg_len;
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
					arg_len = strlen(s1);
					if (arg_len + len < n - 1){
						memcpy(out + len, s1, strlen(s1));
					}
					else {
						memcpy(out + len, s1, n - 1 - len);
						len += strlen(s1);
						goto L1;
					}
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(args, char *);
					arg_len = strlen(s);
					if (arg_len + len < n - 1){
						memcpy(out + len, s, strlen(s));
					}
					else {
						memcpy(out + len, s, n - 1 - len);
						len += strlen(s);
						goto L1;
					}
					len += strlen(s);
					break;
				case 'c':
					c = (char)va_arg(args, int);
					out[len] = c;
					len++;
					if (len == n - 1){
						goto L1;
					}
					break;
			}
		}
		else {
			out[len] = fmt[i];
			len++;
			if (len == n){
				goto L1;
			}
		}
		i++;
	}
	out[len] = '\0';

	return len;

	L1:
	i++;
	out[n-1] = '\0';
	while (fmt[i] != '\0'){
		if (fmt[i] == '%'){
			i++;
			switch (fmt[i]){
				case 'd':
					d = va_arg(args, int);
					itoa(s1, d, 10);
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(args, char *);
					len += strlen(s);
					break;
				case 'c':
					len++;
					break;
			}
		}
		else {
			len++;
		}
		i++;
	}

	return len;

}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	panic("Not implemented");
}

#endif
