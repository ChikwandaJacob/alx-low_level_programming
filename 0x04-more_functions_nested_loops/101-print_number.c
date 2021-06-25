#include "holberton.h"

/**
 * printNumbers - prints all values of an interher
 * @n: number to be printed
 *
 * Return: returns nothing.
 */
void printNumbers(int n)
{
	if (n >= 10)
		printNumbers(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_number - prints an integer.
 * @n: number to be printed
 *
 * Return: returns nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	printNumbers(n);
}
