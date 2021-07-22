#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * is_null - checks whether given string is null.
 * @s: string to be checked.
 *
 * Return: (nil) if string is empty
 *         returns @s if not empty.
 */
char *is_null(char *s)
{
	if (s != NULL)
		return (s);
	return ("nill");
}

/**
 * print_strings - prints numbers followed by a new line.
 * @separator: string that will separate the numbers if it is given.
 * @n: number of strings to be printed.
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *s = separator;
	char *str;

	va_list list;

	if (n != 0)
	{
		/*Initializing List*/
		va_start(list, n);

		for ( ; i < n; i++)
		{
			str = is_null((va_arg(list, char *)));

			if (i < n - 1)
			{
				if (s != NULL)
					printf("%s%s", str, s);
				else
					printf("%s", str);
			}
		}

		va_end(list);
	}
	printf("%s\n", str);
}
