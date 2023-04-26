#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char j);

int _putstr(char *str);

int _printf(const char *format, ...);

int (check_specifier(char *format))(va_list)

#endif
