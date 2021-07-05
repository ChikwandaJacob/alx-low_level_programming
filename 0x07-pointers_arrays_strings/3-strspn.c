#include "holberton.h"

/**
 * _strspm - gets the length of a prefix substring.
 * @s: string
 * @accept: string to be counted
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, i2 = 0, counter = 0;

        for (i = 0; s[i] != '\0'; i++)
	{
		if (counter != i)
			break;
		for (i2 = 0; accept[i2] != '\0'; i2++)
			if (s[i] == accept[i2])
				counter++;
	}
	if (counter > 0)
		return (counter);
	else
		return (counter);
}
