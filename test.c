#include "main.h"
#include <stdio.h>

int main(void)
{
	char alpha = 'd';
	char teststr[] = "The biggest mandem from the biggest ends of ends";
	int f, realpf;

	realpf = printf("%s is %c realest g\n", teststr, alpha);
	printf("r_value is %d\n", realpf);

	f = _printf("%s is %c realest g\n", teststr, alpha);
	printf("f is %d\n", f);
	return (0);
}