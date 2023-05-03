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
	int i = 0, c = 0;

	va_start(args, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
			case 'c':
				c += _putchar(va_arg(args, int));
				break;

			case 's':
				{
					char *str = va_arg(args, char *);
					int j;

					if (str == NULL)
						str = "(null)";

				for (j = 0; str[j] != '\0'; j++)
					c += _putchar(str[j]);

				break;
			}
			case '%':
				c += _putchar('%');
				break;

			default:
				c += _putchar('%');
				c += _putchar(format[i]);
				break;
			}
		}
		else
		{
			c += _putchar(format[i]);
		}

	}


	va_end(args);

	return (c);
}

/*Red-Rim*/
/**
 * printf - a function that produces output according to a format
 * @format: format string
 * Return: the characters printed
 */
int printf(const char *format, ...)
{
	va_list args;
	int c;

	va_start(args, format);
	c = _printf(format, args);
	va_end(args);
	return (c);
}
