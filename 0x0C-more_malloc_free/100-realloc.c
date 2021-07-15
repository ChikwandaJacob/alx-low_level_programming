#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *          - Contents will be copied to the newly allocated space,
 *            in the range from the start of ptr up to the minimum
 *            of the old and new sizes
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer to newly allocated block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *new_ptr;
	char *new_alloc, *temp_data;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		size = new_size;
	else
		size = old_size + new_size;

	new_ptr = malloc(size + 1);

	if (new_ptr == NULL)
		return (NULL);

	temp_data = ptr;
	new_alloc = new_ptr;

	for (i = 0; i < size; i++)
	{
		if (i < old_size)
			new_alloc[i] = temp_data[i];
		else
			new_alloc[i] = '\0';
	}

	free(ptr);

	return (new_alloc);
}
