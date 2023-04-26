#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char j);

int _putstr(char *str);

int _printf(const char *format, ...);

/**
 * struct func - struct for specifier to printer
 * @t : character to compare
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

#endif
