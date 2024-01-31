#include "main.h"
#include <stdio.h>

/**
* print_hex - this function  prints an unsigned int in hexadecimal
* @n:this function print  unsigned int
* @c: case of print (0 = lower, 1 = upper)
* Descriptions: this function prints unsigned in hexadecimal with _putchar commamd
* Return: size the text in  output form
*/
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, ten, k, digit, non;
	int coun = 0;
	char diff;

	if (n != 0)
	{
		non = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (non != 0)
		{
			non /= 16;
			k++;
		}
		ten = 1;
		for (k = 1; k <= len - 1; k++)
			ten *= 16;
		for (k = 1; k <= len; k++)
		{
			digit = n / ten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			coun++;
			n -= digit * ten;
			ten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (coun);
}
/**
* print_x - this function takes an unsigned int an prints it in lowercase hex
* @x: this function print unsigned int
* Descriptions: this function prints in lowercase hex with _putchar commamd
* Return: size of the output
*/
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/**
* print_X - this function takes an unsigned int an prints it in uppercase hex
* @X: this function takes unsigned int an print
* Descriptions: this function prints in uppercase hex with _putchar
* Return: size of the text output form
*/
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
