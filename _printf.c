#include "main.h"
/**
 * _printf - printf func
 * @format: str format
 * Return: the str
 */

int _printf(const char *format, ...)
{
	unsigned int index, rv = 0;
	int s_rv = 0;
	va_list newlist;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(newlist, format);
	for (index = 0; format && format[index] != '\0'; index++)
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
			rv += s_rv - 1;
		}
		else if (format[index + 1] == '%')
		{
			_putchar('%');
			index++;
		}
		else
		{
			_putchar(*format);
		}
		rv++;
	}
	return (rv);
}
