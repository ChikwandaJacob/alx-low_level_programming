#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * _islower - determines if a character is lowercase or not
 * @c: takes a single charcater
 * 
 * Return: Returns 1 if character is lower case.
 * Otherwise the function returns 0.
 */
int _islower(int c);

/**
 * _isalpha - determines if a charcater is part of the alphabet.
 * @c: takes a single charcater
 * 
 * Return: Returns 1 if character is part of alphabet.
 * Otherwise the function returns 0.
 */
int _isalpha(int c);

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * @void: takes nothing
 * 
 * Return: Returns nothing.
 */
void print_alphabet_x10(void);

/**
 * print_alphabet - prints the alphabet
 * @void: takes nothing
 *
 * Return: Returns 0 Success
 */
void print_alphabet(void);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif
