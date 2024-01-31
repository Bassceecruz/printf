#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  * find_function - this function  find format for _printf
  * calls the correspond function
  * @format: format ("char", "string", "int", "decimal")
  * Return: this function NULL or function associate;
  */
int (*find_function(const char *format))(va_list)
{
	unsigned int n= 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (find_f[n].sc)
	{
		if (find_f[n].sc[0] == (*format))
			return (find_f[n].f);
		n++;
	}
	return (NULL);
}
/**
  * _printf - this function  produces output according to a format
  * @format: format ( "char" "string", "int", "decimal")
  * Return: size the text output form;
  */
int _printf(const char *format, ...)
{
	va_list cp;
	int (*f)(va_list);
	unsigned int n = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(cp, format);
	while (format[n])
	{
		while (format[n] != '%' && format[n])
		{
			_putchar(format[n]);
			cprint++;
			n++;
		}
		if (format[n] == '\0')
			return (cprint);
		f = find_function(&format[n + 1]);
		if (f != NULL)
		{
			cprint += f(cp);
			n += 2;
			continue;
		}
		if (!format[n + 1])
			return (-1);
		_putchar(format[n]);
		cprint++;
		if (format[n + 1] == '%')
			n += 2;
		else
			n++;
	}
	va_end(cp);
	return (cprint);
}
