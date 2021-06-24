#include "holberton.h"

/**
 * determineDivider - determines divider value
 * @n: number whose divider should be found
 *
 * Return: returns an integer.
 */
int determineDivider(int n)
{
	if (n < 100)
		return (10);
	if (n > 100 && n < 999)
		return (100);
	if (n > 999 && n < 9999)
		return (1000);
	return (0);
}

/**
 * print_number - prints an integer.
 * @n: number to be printed
 *
 * Return: returns nothing.
 */
void print_number(int n)
{
	int divider = 100;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		divider = determineDivider(n);
		while (divider > 10)
		{
			_putchar((n / divider) + '0');
			n = n % divider;
			if (divider == 1000)
			{
				if (n < 100)
					_putchar(0 + '0');
			}
			divider = determineDivider(n);
		}
		_putchar((n / divider) + '0');
		_putchar((n % divider) + '0');
	}
}
