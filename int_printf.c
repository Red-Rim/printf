#include <stdarg.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * _int_printf - a function that produces output according to a format
 * @format: pointer to a string of characters to be printed
 * Return: the number of characters, or 0 if an error occurs
 */
int _int_printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(args, int);

				c += printf("%d", value);
			}
			else
			{
				putchar('%');
				putchar(*format);
				c += 2;
			}
		}
		else
		{
			putchar(*format);
			c++;
		}
		format++;
	}

	va_end(args);

	return (c);
}
