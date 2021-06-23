#include "holberton.h"
#include <ctype.c>
/**
 * _islower - checks whether character is lowercase
 * @c - is the argument to hold the character to be tested.
 *
 * Return: 1 if the number is lowercase
 * Otherwise function returns 0 if character is not lowercase.
 */

int _islower(int c)
{
  if (islower(c))
    return (1);
  else
    return (0);
}
