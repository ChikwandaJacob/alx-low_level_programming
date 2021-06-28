#include "holberton.h"

/**
 * _strlen - Finds length of a string.
 * @s: String with characters to be counted.
 * Return: returns the length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
