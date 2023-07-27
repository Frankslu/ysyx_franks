#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define max(a, b) ((a) > (b) ? (a) : (b))

#define process_width \
do{ \
	if (fmt[i] == '0'){ \
		high_bits_0 = 1; \
		i++; \
	} \
	for (; fmt[i] < '9' && fmt[i] > '0'; i++){ \
		width = width * 10 + fmt[i] - '0'; \
	} \
} while (0)

int printf(const char *fmt, ...) {
#define BUF_SIZE 4096
	char printf_buffer[BUF_SIZE];
	va_list args;
	va_start(args, fmt);

	int printf_len = vsnprintf(printf_buffer, BUF_SIZE, fmt, args);
	if (printf_len + 1 <= BUF_SIZE){
		for (int i=0; i <= printf_len && i < BUF_SIZE; i++){
			putch(printf_buffer[i]);
		}
	}
	else {
		char realloc_buffer[printf_len+1];
		vsprintf(realloc_buffer, fmt, args);
		for (int i=0; i <= printf_len && i < BUF_SIZE; i++){
			putch(printf_buffer[i]);
		}
	}
	
	return printf_len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	if (fmt == NULL){
		return -1;
	}

	int len = 0;
	int arg_len = 0;
	int d;
	__attribute__((unused)) unsigned int x;
	char c;
	char s1[33];
	char *s;
	// unsigned long pointer;

	int width = 0;
	int high_bits_0 = 0;

	size_t i = 0;
	while (fmt[i] != '\0'){
		if (fmt[i] == '%'){
			i++;
			process_width;
			switch (fmt[i]){
				case 'd':
					d = va_arg(ap, int);
					itoa(s1, d, high_bits_0, width);
					memcpy(out + len, s1, strlen(s1));
					len += strlen(s1);
					break;
				case 'x':
				case 'X':
					x = va_arg(ap, unsigned int);
					xtoa(s1, x, high_bits_0, width);
					memcpy(out + len, s1, strlen(s1));
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(ap, char *);
					arg_len = strlen(s);
					if (arg_len < width){
						memset(out + len, (char)32, width - arg_len);
						len += width - arg_len;
					}
					memcpy(out + len, s, arg_len);
					len += arg_len;
					break;
				case 'c':
					c = (char)va_arg(ap, int);
					out[len] = c;
					len++;
					break;
				default:
					return -1;
			}
			high_bits_0 = 0;
			width = 0;
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

int sprintf(char *out, const char *fmt, ...) {
	if (fmt == NULL){
		return -1;
	}

	va_list args;
	va_start(args, fmt);

	return vsprintf(out, fmt, args);
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	int len = 0;
	int arg_len;
	int d;
	unsigned int x;
	char c;
	char s1[33];
	char *s;

	int width = 0;
	int high_bits_0 = 0;
	// for (int i = 0; i < 6; i++){
		// int c = (int)fmt[i];
		// itoa(s1, c, 10);
		// for (int j = 0; j < strlen(s1); j++){
		// 	putch(s1[j]);
		// }
		// putch('\n');
	// 	putch(fmt[i]);
	// }

	size_t i = 0;
	while (fmt[i] != '\0'){
		if (fmt[i] == '%'){
			i++;
			process_width;
			switch (fmt[i]){
				case 'd':
					d = va_arg(ap, int);
					itoa(s1, d, high_bits_0, width);
					arg_len = strlen(s1);
					if (arg_len + len < n - 1){
						memcpy(out + len, s1, strlen(s1));
					}
					else {
						memcpy(out + len, s1, n - 1 - len);
						len += arg_len;
						goto L1;
					}
					len += arg_len;
					break;
				case 'x':
				case 'X':
					x = va_arg(ap, unsigned int);
					xtoa(s1, x, high_bits_0, width);
					arg_len = strlen(s1);
					memcpy(out + len, s1, strlen(s1));
					if (arg_len + len < n - 1){
						memcpy(out + len, s1, strlen(s1));
					}
					else {
						memcpy(out + len, s1, n - 1 - len);
						len += arg_len;
						goto L1;
					}
					len += arg_len;
					break;
				case 's':
					s = va_arg(ap, char *);
					arg_len = strlen(s);
					if (arg_len < width){
						if((width - arg_len + len) < n-1){
							memset(out + len, (char)32, width - arg_len);
							len += width - arg_len;
						}
						else{
							memset(out + len, (char)32, n - 1 - len);
							len += width;
							goto L1;
						}
					}
					if (arg_len + len < n - 1){
						memcpy(out + len, s, strlen(s));
						len += arg_len;
					}
					else {
						memcpy(out + len, s, n - 1 - len);
						len += arg_len;
						goto L1;
					}
					break;
				case 'c':
					c = (char)va_arg(ap, int);
					out[len] = c;
					len++;
					if (len == n - 1){
						goto L1;
					}
					break;
				default:
					return -1;
			}
			high_bits_0 = 0;
			width = 0;
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
			process_width;
			switch (fmt[i]){
				case 'd':
					d = va_arg(ap, int);
					itoa(s1, d, high_bits_0, width);
					len += strlen(s1);
					break;
				case 'x':
				case 'X':
					x = va_arg(ap, unsigned int);
					xtoa(s1, x, high_bits_0, width);
					len += strlen(s1);
					break;
				case 's':
					s = va_arg(ap, char *);
					len += max(strlen(s), width);
					break;
				case 'c':
					c = (char)va_arg(ap, int);
					len++;
					break;
				default:
					return -1;
			}
			high_bits_0 = 0;
			width = 0;
		}
		else {
			len++;
		}
		i++;
		
	}

	return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	if (fmt == NULL){
		return -1;
	}

	va_list args;
	va_start(args, fmt);

	return vsnprintf(out, n, fmt, args);
}

#endif
