#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*Red-Rim*/
/**
 * _int_print - function print int handel %d %i
 * @list: a va_list of the argume,ts passed to the function
 * Return: the number of characters printed
 */
int _int_print(va_list list)
{
	int n = va_arg(list, int);
	int digits = 0;
	int divisor = 1;
	int c;

	/*handle the case where n is negative */
	if (n < 0)
	{
		putchar('-');
		c = 1;
		n = -n;
	}
	/*count the number of digits in n */
	while (n / divisor >= 10)
	{
		digits++;
		divisor *= 10;
	}
	digits++;

	/* print each digit of n*/
	while (divisor >= 1)
	{
		c++;
		putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}

	return (c);
}
