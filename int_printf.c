#include <stdarg.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * _printf - a function that produces output according to a format
 * @format: pointer to a string of characters to be printed
 * Return: the number of characters, or 0 if an error occurs
 */
int _printf(const char *format, ...)
{
	int ama = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(args, int);

				ama += printf("%d", value);
			}
			else
			{
				putchar('%');
				putchar(*format);
				ama += 2;
			}
		}
		else
		{
			putchar(*format);
			ama++;
		}
		format++;
	}

	va_end(args);

	return (ama);
}
