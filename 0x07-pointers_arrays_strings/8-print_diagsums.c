#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix of integers
 * @a: array
 * @size: array size
 * Return: returns nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += *((a + i * size) + i);
	printf("%d ,", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += *((a + i * size) + (size - i - 1));
	printf("%d\n", sum);
}
