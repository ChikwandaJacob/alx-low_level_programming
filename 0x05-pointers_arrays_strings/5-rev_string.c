#include "holberton.h"
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: returns nothing.
 */
void rev_string(char *s)
{
	int length, i, j;
	char *str2;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	length = i - 1;

	str2 = (char*) malloc(i * sizeof(char));

	for (i = length; i >= 0; i--)
	{
		str2[j] = s[i];
		j++;
	}
	str2[j] = '\0';
	s = str2;
}
