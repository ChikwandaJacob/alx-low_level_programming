#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints the alphabet.
 *
 * Return: returns nothing.
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
