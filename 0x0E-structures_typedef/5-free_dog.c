#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to dog
 * @d: structure with memory to be freed
 *
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	free(d);
}
