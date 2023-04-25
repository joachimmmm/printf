#include "main.h"
#include <stdio.h>

int main(void)
{
	char teststr[] = "The big mandem from the ends";
	int f;

	f = _printf("%s", teststr);
	printf("f is %d", f);
	return (0);
}
