#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific character.
 * @size: size of array to be created
 * @c: character to initialize array with.
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(int));
	unsigned int i;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
