# Dynamic Memory Allocation

## Introduction

In this directory we will cover some general concepts of dynamic memory allocation. These concepts include:
1. What is the difference between automatic and dynamic allocation
2. What is malloc and free and how to use them
3. Why and when use malloc
4. How to use valgrind to check for memory leak

## Methods Available in this directory

*Note:* In this directory only functions will be created. These functions can be used in any of your programs. However, 
a requiste to this should be that your program should match up with the functions description.

Function Prototype | Function Description | Function Definition Name
------------------ | -------------------- | ------------------------
char *create_array(unsigned int size, char c); | creates an array of chars, and initializes it with a specific char. | 0-create_array.c
char *_strdup(char *str); | returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. | 1-strdup.c
char *str_concat(char *s1, char *s2); | concatenates two strings. | 2-str_concat.c
int **alloc_grid(int width, int height); | returns a pointer to a 2 dimensional array of integers. | 3-alloc_grid.c
void free_grid(int **grid, int height); | frees a 2 dimensional grid previously created by your alloc_grid function. | 4-free_grid.c
char *argstostr(int ac, char **av); | concatenates all the arguments of your program. | 100-argstostr.c
char **strtow(char *str); | splits a string into words. | 101-strtow.c

_To know more about the functions list above kindly read about them in there *function definition name.*_

## How to use the functions in your program.

1. Download whatever function you would love to use.
2. Download the *holberton.h* file.
3. Put the files downloaded in step 1 and 2 into your projects directory.
4. Include the header file into your program.
5. Compile the program like this : _gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *your_program_name.c* *function_defintion_name.c* -o executable_file_name_
6. Run your program like this: *./executable_file_name_*
