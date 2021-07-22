#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: string that will separate the numbers if it is given.
 * @n: number of integers to be printed.
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *s = separator;

	va_list list;

	if (n != 0 && s != NULL)
	{
		/*Initializing List*/
		va_start(list, n);

		for ( ; i < n - 1; i++)
		{
			if (s != NULL)
				printf("%d%s", va_arg(list, int), s);
			else
				printf("%d", va_arg(list, int));
		}
		printf("%d\n", va_arg(list, int));

		va_end(list);
	}
}
