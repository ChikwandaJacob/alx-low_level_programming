#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9
 * void: Takes nothing
 *
 * Return: Returns nothing.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
