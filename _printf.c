#include "main.h"

/*Red-Rim & Hasu-naj*/
/**
 * _printf - a function that produces output according to a format
 * @format: format
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, c = 0;


	if (!format)
	{
		return (-1);
	}

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;
			c += check_format(ap, &format[i]);
		}
		else
		{
			c += _putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (c);
}
