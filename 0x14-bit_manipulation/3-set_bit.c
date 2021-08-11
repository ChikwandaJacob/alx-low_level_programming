#include "main.h"

/**
 * get_bit_length - gets the length of bits in decimal
 * @num: number whose bits are to be calculated.
 *
 * Return: numbr of bits.
 */
unsigned long int get_bit_length(unsigned long int num)
{
	unsigned long int i = 0;

	while (num != 0)
	{
		if (i == 0)
			i++;
		num /= 2;
		i++;
	}

	return (i);
}

/**
 * set_bit - gets bit at a given index.
 * @n: number containing bits
 * @index: index of bit
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int init_len = get_bit_length(*n), fin_len, temp = *n;

	*n = *n | (1 << index);

	fin_len = get_bit_length(*n);

	if (fin_len != init_len && temp != 0)
	{
		*n = temp;
		return (-1);
	}

	return (1);
}
