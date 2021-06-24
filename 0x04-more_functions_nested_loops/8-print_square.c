#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: returns nothing
 */
void print_square(int size)
{
int i, j;
if (size < 0)
putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
putchar('#');
putchar('\n');
}
putchar('\n');
}
}
