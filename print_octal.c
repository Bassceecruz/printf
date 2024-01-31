#include "main.h"
/**
* print_octal -this print  unsigned int argument is converted to unsigned octal
* @o: this print unsigned to be converte
* Descriptions: prints unsigned octal
* Return: size the output form
*/
int print_octal(va_list o)
{
	unsigned int len, ten,k, digit, n, non;
	int coun = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		non = n;
		len = 0;
		while (non != 0)
		{
			non /= 8;
			len++;
		}
		ten = 1;
		for (k = 1; k <= len - 1; k++)
			ten *= 8;
		for (k = 1; k <= len; k++)
		{
			digit = n / ten;
			_putchar(digit + '0');
			coun++;
			n -= digit * ten;
			ten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (coun);
}
