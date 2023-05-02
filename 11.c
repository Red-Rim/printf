#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/*Red-Rim*/
/**
 * printf - a function that produces output according to a format
 * @format: format
 * Return: c printed chars
 */
int printf(const char *format, ...)
{
	int i, c = 0;
	va_list arg;
	char char_c, *s;

	va_start(arg, format);

		for (i = 0; format != NULL && format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'c':
						char_c = (char)va_arg(arg, int);
						_putchar(char_c);
						c++;
						break;
					case 's':
						s = va_arg(arg, char *);
						if (s == NULL)
							s = "(null)";
						while (*s)
						{
							_putchar(*s);
							s++;
							c++;
						}
						break;
					case '%':
						_putchar('%');
						c++;
						break;
					default:
						_putchar('%');
						_putchar(format[i]);
						c += 2;
						break;
				}
			}
			else
			{
				_putchar(format[i]);
				c++;
			}
		}

			va_end(arg);
			return (c);
}
