#include "main.h"

/*Red-Rim & Hasu-naj*/
/**
 * _printf - a function that produces output according to a format
 * @format: format
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int c = 0;
	int num;
	int num_digits;
	int divisor;
	int digit;


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
				c += _putchar('%');
			/************print int********************/
			 else if (*format == 'd' || *format == 'i')
			 {
				 num = va_arg(args, int);
				 if (num < 0)
				 {
					 _putchar('-');
					 c++;
					 num = -num;
				 }
				 num_digits = getNumDigits(num);
				 c += num_digits;
				 divisor = computeDivisor(num_digits);
				 do
				 {
					 digit = num / divisor;
					 _putchar(digit + '0');
					 c++;
					 num %= divisor;
					 divisor /= 10;
				 }
				 while (divisor > 0);
			 }
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
