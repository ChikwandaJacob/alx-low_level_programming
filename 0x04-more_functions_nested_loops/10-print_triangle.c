#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 *
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int i, j, last;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			last = size - (i + 1);
			for (j = 0; j < size; j++)
			{
				if (j < last)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
