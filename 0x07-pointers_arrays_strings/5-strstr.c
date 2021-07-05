#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
        while (*haystack)
	{
	        if (*haystack == *needle)
			return haystack;
		haystack++;
	}
	return haystack;
}
