#include <stdio.h>
#include <stdlib.h>

/**
 * getNumDigits - calculat a digit
 * @num: integer
 *
 * Return: numDigits
 */
int getNumDigits(int num)
{
	int temp, numDigits;

	temp = num;
	numDigits = 0;
	do
	{
		temp /= 10;
		numDigits++;
	}
	while (temp > 0);
	return numDigits;
}
