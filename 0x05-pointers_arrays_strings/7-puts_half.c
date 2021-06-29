#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int i, half, total;

	i = 0;
	while (str[i] != '\0')
		i++;
	total = i;
	if (i % 2 == 1)
		half = (total + 1) / 2;
	else
		half = total / 2;
	for (i = half; i < total; i++)
		_putchar(str[i]);
	_putchar('\n');
}
