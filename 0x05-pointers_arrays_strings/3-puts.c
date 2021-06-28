#include "holberton.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to append new line to.
 * Return: returns nothing.
 */
void _puts(char *str)
{
	int i;

	i = -1;
	do {
		i++;
		if (str[i] == '\0')
			str[i] = '\n';
		_putchar(str[i]);
	} while (str[i] != '\n');
}
