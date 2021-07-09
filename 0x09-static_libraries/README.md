#Static libraries

This directory contains data about a static library that I have built for
myself. The name of the static library is called 'libholberton.a'.The
functions that my library contains the following functions:

Function Name | Function Description
int _putchar(char c) | returns a single charcter
int _islower(int c) | returns 1 if character is lower case
int _isalpha(int c) | returns 1 if character is part of the alphabet
int _abs(int n) | returns the absolute value of a given number
int _isupper(int c) |  returns 1 if character is upper case
int _isdigit(int c) |  returns 1 if character is a digit
int _strlen(char *s) | returns the length of a string
void _puts(char *s) | prints text with a new line at the end
char *_strcpy(char *dest, char *src) | returns a copied string
int _atoi(char *s) | converts string to an interger
char *_strcat(char *dest, char *src) - concatenates two strings
char *_strncat(char *dest, char *src, int n) | concatenates specified number of characters
char *_strncpy(char *dest, char *src, int n) | copies specifies number of charcaters
int _strcmp(char *s1, char *s2) - compares two strings and returns 1 if true
char *_memset(char *s, char b, unsigned int n) | set memory spaces of an array to 0 bytes
char *_memcpy(char *dest, char *src, unsigned int n) | copies byes from one array to the next
char *_strchr(char *s, char c) | locates a charcter in a string
unsigned int _strspn(char *s, char *accept) | Gets the length of a prefix substring
char *_strpbrk(char *s, char *accept) | Searches a string for any of a set of bytes
char *_strstr(char *haystack, char *needle) | Locates a substring
