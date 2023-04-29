#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*Red-Rim*/
/**
 * _printf - a function that produces output according to a format
 * @format: format
 * Return: c printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int c = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				_putchar(c);
				c++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					_putchar(*str);
					c++;
					str++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				c++;
			}
		}
		else
		{
			_putchar(*format);
			c++;
		}
		format++;
	}
	va_end(args);
	return (c);
}
