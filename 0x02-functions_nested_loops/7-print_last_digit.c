#include "main.h"

/**
 * print_last_digit - determines last value of a number
 * @n : is the number to be determined.
 *
 * Return: returns last value of a number
 */
int print_last_digit(int n)
{
        if (n < 0)
		n *= -1;

	_putchar(n % 10);
	return (n % 10);
}
