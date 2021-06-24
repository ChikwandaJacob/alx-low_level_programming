#include "holberton.h"

/**
 * _isupper - checks if character is uppper
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
