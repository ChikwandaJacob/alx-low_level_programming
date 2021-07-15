#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *               array created should contain
 *               all the values from min (included)
 *               to max (included), ordered from min to max
 * @min: minumum number
 * @max: maximum number
 * Return: pointer to the newly created array.
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr, size, i = 0;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for ( ; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
