#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) premain()
{
        printf("You're beat! and yet, \t"
	       "you must allow,\nI bore \t"
	       "my house uponmy back!\n");
}
