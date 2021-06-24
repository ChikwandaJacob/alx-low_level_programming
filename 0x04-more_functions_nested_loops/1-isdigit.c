#include "holberton.h"

/**
 * _isdigit - checks if character is a digit
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
