#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/*Red-Rim*/
/**
 * _printf_reserved - a function that produces output according to a format
 * @format: format
 * Return: tha character printed
 */
int _printf_reserved(const char *format, ...)
{
	va_list args;
	int c = 0;
	char *str;

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
				case 'u':
					{
						unsigned int num = va_arg(args, unsigned int);

						printf("%o", num);
						c++;
						break;
					}
				case 'x':
					{
						unsigned int num = va_arg(args, unsigned int);

						printf("%x", num);
						c++;
						break;
					}
				case 'X':
					{
						unsigned int num = va_arg(args, unsigned int);

						printf("%X", num);
						c++;
						break;
					}
				case 's':
					{
						str = va_arg(args, char *);
						if (str == NULL)
						{
							printf("(null)");
							c += 6;
						}
						else
						{
							printf("%s", str);
							c += strlen(str);
						}
						break;
					}

				case 'S':
					{
						str = va_arg(args, char *);
					if (str == NULL)
						{
							printf("(null)");
							c += 6;
						}
						else
						{
						int i;
						for (i = 0; str[i] != '\0'; i++)
						{
						if (str[i] < 32 || str[i] >= 127)
						{
						printf("\\x%02X", (unsigned char) str[i]);
									c += 4;
								}
					else
					{
						_putchar(str[i]);
						c++;
					}
						}
						}
					break;
					}
				case 'r':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(null)");
						c += 6;
					}
					else
					{
						int i;

						for (i = strlen(str) - 1; i >= 0; i--)
						{
							_putchar(str[i]);
							c++;
						}
					}
					break;
			}
			case '%':
			{
				_putchar('%');
				c++;
				break;
			}
			default:
			{
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

	va_end(args);
	return (c); 
}
