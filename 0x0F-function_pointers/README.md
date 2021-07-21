# C - Function pointers

In this directory we will create programs and header files that show the use case of function pointers.

## Files in this directory

*Note #1:* _All function prototypes will be in the_ *function_pointers.h* _header file._

File Name | File Description | Function Prototye if any
--------- | ---------------- | ------------------------
0-print_name.c | prints a name | void print_name(char *name, void (*f)(char *));
1-array_iterator.c | executes a function given as a parameter on each element of an array| void array_iterator(int *array, size_t size, void (*action)(int));
2-int_index.c | searches for an integer | int int_index(int *array, int size, int (*cmp)(int));

### program that performs simple operations

#### Program Description

*Usage:* calc num1 operator num2
The program prints the result of the operation, followed by a new line.

#### Files In Program

*Note #2* _All function prototypes will be in the_ *3-calc.h* _header file._

File Name | File Description | Function Prototye if any
--------- | ---------------- | ------------------------
3-op_functions.c | Contain 5 function to add, subtract, divide, multiply and find remainder | int op_add(int a, int b); int op_sub(int a, int b); int op_mul(int a, int b); int op_div(int a, int b); int op_mod(int a, int b);
3-get_op_func.c | file contains the function that selects the correct function to perform the operation asked by the user | int (*get_op_func(char *s))(int, int);
3-main.c | file contains your main function only | N/A

### program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function

*Usage:* ./main number_of_bytes

#### Files In Program

File Name | File Description
--------- | ----------------
100-main_opcodes.c | prints the opcodes

*Note #3:* To read know more about the files and function prototypes open their respective files.
