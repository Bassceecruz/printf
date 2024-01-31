#include "main.h"
/**
* print_dec - this function  prints an decimal values
* @d: this function print integer 
* Descriptions: prints digit with _putchar commamd
* Return: size the text in output form
*/
int print_dec(va_list d)
{
	int len, ten, k, digit, n, coun = 0, non;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			coun++;
		}
		non = n;
		len = 0;
		while (non != 0)
		{
			non /= 10;
			len++;
		}
		ten = 1;
		for (k = 1; k <= len - 1; k++)
			ten *= 10;
		for (k = 1; k <= len; k++)
		{
			digit = n / ten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			coun++;
			n -= digit * ten;
			ten /= 10;
		}

	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (coun);
}
