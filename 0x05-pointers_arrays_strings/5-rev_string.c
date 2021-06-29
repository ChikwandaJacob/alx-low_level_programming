#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: returns nothing.
 */
void rev_string(char *s)
{
	int s_length, i;
	char temp_char;

	s_length = 0;
	while (s[s_length] != '\0')
		s_length++;
	for (i = 0; i < s_length / 2; i++)
	{
		temp_char = s[s_length - i - 1];
		s[s_length - i - 1] = s[i];
		s[i] = temp_char;
	}
}
