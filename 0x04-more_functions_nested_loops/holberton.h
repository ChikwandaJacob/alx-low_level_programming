#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/**
 * print_number - prints an integer.
 * @n: number to be printed
 *
 * Return: returns nothing.
 */
void print_number(int n);

/**
 * _putchar - prints out a character
 * @c: The character to print
 *
 * Return: Returns 1 on sucess. Otherwise 0/
 */
int _putchar(char c);

/**
 * _isupper - checks if character is uppper
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isupper(int c);

/**
 * _isdigit - checks if character is a digit
 * @c: The character to be checked
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int _isdigit(int c);

/**
 * mul - multiplies two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Returns 1 on sucess. Otherwise 0.
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers 0-9
 * @void: Takes nothing
 *
 * Return: Returns nothing.
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * @void: Takes nothing
 *
 * Return: Returns nothing
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 * @void: Takes nothing
 *
 * Return: Returns nothing.
 */
void more_numbers(void);

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 *
 * Return: Returns nothing.
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: returns nothing.
 */
void print_diagonal(int n);

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: returns nothing
 */
void print_square(int size);

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 *
 * Return: returns nothing
 */
void print_triangle(int size);

#endif
