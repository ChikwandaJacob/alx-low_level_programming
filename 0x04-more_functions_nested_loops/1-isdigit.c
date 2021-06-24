#include "holberton.h"

/**
 * _isdigit - checks if character is a digit
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isdigit(int c)
{
int is_digit = 0, i;
for (i = 0; i < 10; i++)
if (i == c)
is_digit = 1;
if (is_digit == 1)
return (1);
else
return (0);
}
