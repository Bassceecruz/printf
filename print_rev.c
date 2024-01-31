#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - this function prints a string in reverse
*@r: this function print string 
*Return: this function print number of chars printed
*/
int print_rev(va_list r)
{
	char *jp;
	int n, k = 0;

	jp = va_arg(r, char *);
	if (jp == NULL)
		jp = ")llun(";
	for (n = 0; jp[n] != '\0'; n++)
		;
	for (n -= 1 ; n >= 0; n--)
	{
		_putchar(jp[n]);
		k++;
	}
	return (k);
}
