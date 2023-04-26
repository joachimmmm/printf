#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	char c = va_args(arg, char);
	int count = 0;

	if (c)
	{
	count = write( 1, &c, 1);
	return(count);
	}
}
