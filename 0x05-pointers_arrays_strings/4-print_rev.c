#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 * Return: returns nothing.
 */
void print_rev(char *s)
{
	int length, i;

	length = _strlen(s) - 1;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
