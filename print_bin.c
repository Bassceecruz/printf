#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_bin -this for converting to binary
* @b: this funtion is to print number in decinal
* Return: this function print number of chars 
*/
int print_bin(va_list b)
{
	unsigned int len, ten, k, digit, n, non;
	int coun = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		non = n;
		len = 0;
		while (non != 0)
		{
			non /= 2;
			len++;
		}
		ten = 1;
		for (k = 1; k <= len - 1; k++)
			ten *= 2;
		for (k = 1; k <= len; k++)
		{
			digit = n / ten;
			_putchar(digit + '0');
			coun++;

			n -= digit * ten;
			ten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (coun);
}
