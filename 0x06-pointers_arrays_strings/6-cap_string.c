#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: returns capitalized string
 */
char *cap_string(char *str)
{
	const int A_a_diff = 32;
	int i = 0, temp, capitalize = 0;
	char c;

	while (str[i] != '\0')
	{
		temp = (int)(char)(str[i]) - A_a_diff;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (capitalize == 1)
				{
					str[i] = (char)(temp);
					capitalize = 0;
				}
			        i++;
				continue;
			}
			else
			{
				c = str[i+1];
				if (str[i] == ' ' && (c >= 'a' && c <= 'z'))
					capitalize = 1;
				if (str[i] == '\t' || str[i] == '\n')
					capitalize = 1;
				if (str[i] == '.' && (c >= 'a' && c <= 'z'))
					capitalize = 1;
				i++;
				continue;
			}
		}
	}
	return (str);
}
