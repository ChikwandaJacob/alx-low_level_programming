#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string.
 * @str: string
 * Return: returns length of @str
 */
unsigned int _strlen(char *str)
{
	unsigned int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes to be added to s1 from s2
 * Return: s1, followed by the first n bytes of s2, and null terminated
 *         If the function fails, it should return NULL
 *         If n is greater or equal to the length of s2 program
 *         should use entire string s2.
 *         If NULL is passed it should be treated as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";

	n >= _strlen(s2) ? n = _strlen(s2) + 1 : n++;

	size = _strlen(s1) + n;
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for ( ; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for ( ; j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
