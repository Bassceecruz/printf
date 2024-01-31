#include "main.h"
/**
* print_unsig -this  function that prints unsigned number value
* @u: this print an unsigned number
* Descriptions:   this prints unsigned number with putchar comamad
* Return: size the output text form
*/
int print_unsig(va_list u)
{
	unsigned int len, ten, k, digit, n, non;
	int coun = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
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
		for (k= 1; k <= len; k++)
		{
			digit = n / ten;
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
