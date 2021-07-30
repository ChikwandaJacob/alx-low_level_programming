#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) premain()
{
	char *str = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house uponmy back!\n";

	printf("%s%s", str, str2);
}
