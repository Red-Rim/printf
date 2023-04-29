#include "main.h"
/*Red-Rim*/
/**
 * rev_str - function that print a reversed string
 * @s: string
 * Return: number of the bytes
 */
int rev_str(char *s)
{
	int len = 0;
	int i;

	int len = 0;
	if (s == NULL)
		s = "(null)";

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return len;
}
