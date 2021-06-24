#include "holberton.h"

/**
 * _isupper - checks if character is uppper
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isupper(int c)
{
int is_alpha = 0;
char letter;
for (letter = 'A'; letter <= 'Z'; letter++)
if (c == letter)
is_alpha = 1;
if (is_alpha == 1)
return (1);
else
return (0);
}
