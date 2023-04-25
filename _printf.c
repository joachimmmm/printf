#include "main.h"

int _printf(const char *format)
{
	unsigned int index;
	
	va_list newlist;
	va_start(newlist, format);
	
	for (index = 0; format[index] != '\0';)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
		}
