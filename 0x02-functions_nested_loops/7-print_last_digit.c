#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * print_last_digit - determines last value of a number
 * @n : is the number to be determined.
 *
 * Return: returns last value of a number
 */

int print_last_digit(int n)
{
char c[50];
sprintf(c, "%d", n);
int length = strlen(c) - 1;
return (c[length] - '0');
}
