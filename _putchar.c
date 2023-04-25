#include "main.h"

/**
 * _putchar - putchar func
 * @j: the char
 * Return: the char
 */
int _putchar(char j)
{
	int result;
	result = write(1, &j, 1);
	return (result);
}
