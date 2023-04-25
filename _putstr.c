#include "main.h"

/**
 * _putstr - prints str
 * @str: str to be printed
 * Return: an int
 */
int _putstr(char *str)
{
	int strindex;
	int strcount = 0;

	if (str)
	{
		for (strindex = 0; strindex != '\0'; strindex++)
			{
				_putchar(str[strindex]);
				strcount++;
			}
	}
	return (strcount);
}
