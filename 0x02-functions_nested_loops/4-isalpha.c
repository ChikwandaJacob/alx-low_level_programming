#include "holberton.h"

/**
 * _isalpha - determines whether a chracter is part of the alphabet
 * @c: this is the character to be tested.
 *
 * Return: returns 1 if character is part of the alphabet.
 * Otherwise it returns 0.
 */
int _isalpha(int c)
{
char sletter, bletter;
int is_alpha = false;
for (sletter = 'a'; sletter <= 'z'; sletter++)
if (sletter == c)
is_alpha = true;
for (bletter = 'A'; bletter <= 'Z'; bletter++)
if (bletter == c)
is_alpha = true;
if (is_alpha)
return (1);
else
return (0);
}
