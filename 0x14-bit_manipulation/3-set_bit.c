#include "main.h"

/**
 * set_bit - gets bit at a given index.
 * @n: number containing bits
 * @index: index of bit
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index)
		*n = *n | (1 << index);
	else
		return (-1);
	return (1);
}
