#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character in the string
 * Return: Returns a pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
