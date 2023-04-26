#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char j);

int _putstr(char *str);

int _printf(const char *format, ...);

int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)

int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size)


#endif
