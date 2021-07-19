#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog to be created.
 * @age: age of the dog
 * @owner: dog name owner
 *
 * Return: returns a pointer to the newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *name_cpy = name, *owner_cpy = owner;

	if (dog == NULL)
		return (NULL);
	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}
