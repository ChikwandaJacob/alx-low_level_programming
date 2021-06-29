#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: returns nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
		{
			i++;
			continue;
		}
		i++;
	}
	_putchar('\n');
}
