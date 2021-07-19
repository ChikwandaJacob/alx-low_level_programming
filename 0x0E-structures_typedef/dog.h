#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog structure
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: age of the dog
 *
 * Description: This structure helps store some useful information
 *              about a dog i.e. its name, the owner and its age.
 */
struct dog
{
	char *name, *owner;
	float age;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
