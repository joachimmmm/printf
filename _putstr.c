#include "main.h"

/**
 * _putstr - prints str
 * @str: str to be printed
 * Return: an int
 */
int _putstr(char *str)
{
	int strindex = 0;
	int strcount = 0;

	if (str)
	{
		while (str[strindex] != '\0')
			{
				_putchar(str[strindex]);
				strcount++;
				strindex++;
			}
	}
	return (strcount);
}
