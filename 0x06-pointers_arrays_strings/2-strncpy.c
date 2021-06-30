#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: final text to be returned
 * @src: text to be appended
 * @n: number of charcaters to be appended
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
