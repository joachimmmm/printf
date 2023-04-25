#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int index;
	unsigned int rv = 0;
	int s_rv = 0;
	
	va_list newlist;
	va_start(newlist, format);
	
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
		}
		else if (format[index + 1] == 'c')
		{
			_putchar(va_arg(newlist, int));
			index++;
		}
		else if (format[index + 1] == 's')
		{
			s_rv = _putstr(va_arg(newlist, char *));
			index++;
			rv += (s_rv - 1);
		}
		else if (format[index + 1] == '%')
		{
			_putchar('%');
		}
		rv++;
	}
	return (rv);
}
