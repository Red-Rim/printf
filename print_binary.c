#include <stdarg.h>
#include "main.h"

/*Red-Rim*/
/**
 * _printf - prints a formated string to stdout
 * @format: the format strin
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'b')
		{
			unsigned int n;
			format += 2;
			n = va_arg(args, unsigned int);

			c += print_binary(n);
		}
		else
		{
			c += _putchar(*format++);
		}
	}

	va_end(args);
	return (c);
}

/*Red-Rim*/
/**
 * print_binary - prints a number in binary format
 * @n: the number of characters printed
 * Return: the number of characters printed
 */
int print_binary(unsigned int n)
{
	if (n > 1)
	{
		unsigned int q = n >> 1;

		print_binary(q);
		_putchar((n % 2) + '0');

		return (1 + print_binary(q));
	}
	else
	{
		_putchar(n + '0');
		return (1);
	}
}
