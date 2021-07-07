#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be worked on.
 * Return: length of s in integer.
 */
int _strlen_recursion(char *s)
{
	int n = sizeof(*s);

	if (*s != '\0')
		s++;
	else if (*s == '\0')
		return (0);

	return (n + _strlen_recursion(s));
}
