#include <stdio.h>
#include <stdlib.h>

/**
 * computeDivisor - calculate divisor
 * @num_digit: integer
 *
 * Return: divisor
 */
int computeDivisor(int num_digits)
{
	int divisor;
	int j;

	divisor = 1;
	for (j = 1; j < num_digits; j++)
	{
		divisor = divisor * 10;
	}
	return divisor;
}
