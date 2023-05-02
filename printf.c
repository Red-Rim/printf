#include "main.h"
/*Red-Rim*/
/**
 * _printf - a function that produces output according to a format
 * @format: format string
 * Return: the characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ama;

	va_start(args, format);
	ama = _cprintf(format, args);
	va_end(args);

	return (ama);
}

/**
 * _cprintf - prints a formatted string with a va_list
 * @format: format
 * @args: the va_list of arguments
 * Return: the characters printed
 */

int _cprintf(const char *format, va_list args)
{
	int i, j, ama = 0;

	char *str_arg;

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			ama += _putchar(format([i]);
					continue;
					}

					i++;
					if (!format[i])
					break;

					switch (format[i])
					{
					case 'c':
					ama += _putchar(va_arg(args, int));
					break;
					case 's':
					str_arg = va_arg(args, char *);
					if (!str_arg)
					ama += _putstr("(null)");
					else
					ama += _putstr(str_arg);
					break;
					case '%':
					ama += _putchar('%');
					break;
					default:
					ama += _putchar('%');
					ama += _putchar(format[i]);
					break;
					}
	}
	return (ama);
}
