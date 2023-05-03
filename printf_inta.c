#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*Red-Rim*/
/**
 * _printf_inta - a function that produces output according to a format
 * @format: format
 * Return: the character printed
 */
int _printf_inta(const char *format, ...)
{
	va_list args;
	int c = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					{
						int num = va_arg(args, int);

						printf("%d", num);
						c++;
						break;
					}
				case '%':
					{
						_putchar('%');
						c++;
						break;
					}
				default: {
						 _putchar(*format);
						 c++;
						 break;
					 }
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
