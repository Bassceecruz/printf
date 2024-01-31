#include "main.h"
#include <stdio.h>
/**
  * print_rot13 -this functions encodes a string into rot13.
  * @R: this function convert a string 
  * Return: size the output text formulation
  */
int print_rot13(va_list R)
{
	int k, n, coun = 0;
	char *t;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	t = va_arg(R, char *);
	if (t == NULL)
		t = "(null)";
	for (k = 0; t[k] != '\0'; k++)
	{
		for (n = 0; input[n] != '\0'; n++)
		{
			if (t[k] == input[n])
			{
				_putchar(output[n]);
				coun++;
				break;
			}
		}
	}
	return (coun);
}
