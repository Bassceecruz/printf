#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes s function print the  character c to stdout
 * @s: this function print string
 *
 * Return: (1)
 */
int print_string(va_list s)
{
	char *bassey_string;
	int  n = 0;

	bassey_string = va_arg(s, char *);
	if (bassey_string == NULL)
		bassey_string = "(null)";
	while (bassey_string[n])
	{
		_putchar(bassey_string[n]);
		n++;
	}
	return (n);
}
