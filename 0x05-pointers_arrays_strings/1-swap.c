#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: First interger value.
 * @b: Second interger value.
 * Return: Returns nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
