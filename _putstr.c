#include "main.h"
/*Red-Rim & Hasu-naj*/
/**
 * _putstr - prints a string to stdout
 * @str: the string to be printed
 * Return: the number of characters printed
 */
int _putstr(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
