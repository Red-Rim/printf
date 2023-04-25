#include "main.h"

/*Red-Rim & Hasu-naj*/
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
				c += _putchar(va_arg(args, int));
			else if (*format == 's')
				c += _putstr(va_arg(args, char *));
			else if (*format == '%')
			{
				c += _putchar('%');
			else
				return (-1);
		}
		else
			c += _putchar(*format);
		format++;
	}

	va_end(args);

	return (c);
}
