#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*Red-Rim*/
/**
 * print_format - prints formatted output to the console
 * @format: format
 * @args: the variable arguments list
 * Return: the character printed
 */
int print_format(const char *format, va_list args)
{
	int c = 0;

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
				case 's':
					{
						char *str = va_arg(args, char *);

						printf("%s", str);
						c++;
						break;
					}
				case 'c':
					{
						char ch = va_arg(args, int);

						_putchar(ch);
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

	return (c);
}

/*Red-Rim*/
/**
 * _printf_inta - a function that produces output according to a format
 * @format: format
 * Return: the numb of characters printed
 */
int _printf_inta(const char *format, ...)
{
	va_list args;
	int c;

	va_start(args, format);
	c = print_format(format, args);
	va_end(args);

	return (c);
}
