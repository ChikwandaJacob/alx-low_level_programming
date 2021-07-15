#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using calloc
 *           The memory is set to zero
 * @nmemb: number of elements
 * @size: array size
 * Return: returns a pointer to the allocated memory
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *temp_ptr;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp_ptr = malloc(nmemb * size);

	if (temp_ptr == NULL)
		return (NULL);

	ptr = temp_ptr;

	for ( ; ptr < (size * nmemb); i++)
		ptr[i] = '\0';

	return (ptr);
}
