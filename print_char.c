#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - this write the character c to stdout
 * @c: this function print characters
 *
 * Return: (1)
 */
int print_char(va_list c)
{
	unsigned char bassey_char;

	bassey_char = va_arg(c, int);
	_putchar(bassey_char);
	return (1);
}
/**
 * print_percentage - this function print (%)
 *
 * Return: (1)
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
