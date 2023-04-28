#include <stdarg.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * _printf - formatted string to the standard output stream
 * @format: pointer to a string of characters to be printed
 * Return: the number of characters, or 0 if an error occurs
 */
int _printf(const char *format, ...)
{
	int ama = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			int value = va_arg(args, int);

			ama += printf("%d", value);
			format++;
		}
		else
		{
			putchar(*format);
			ama++;
			format++;
		}
	}

	va_end(args);

	return (ama);
}
