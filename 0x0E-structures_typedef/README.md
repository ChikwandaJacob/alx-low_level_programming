# C - Structures, typedef

## Purpose of Directory

In this directory we will create both header files and programs to show the use of Structures and Typedef.

## Program & Header Files 

### Header File(s)

Header File | Header File Description
----------- | -----------------------
dog.h | Define a new type struct dog with the following elements: _(name, type = char *)_, _(age, type = float)_ and _(owner, type = char *)_
dog.h | Defines a new type dog_t as a new name for the type struct dog


### Program File(s)
1-init_dog.c | Contains a function that initialize a variable of type struct dog. *Prototype*: void init_dog(struct dog *d, char *name, float age, char *owner);
2-print_dog.c | Contains a function that prints a struct dog
4-new_dog.c | Contains a function that creates a new dog
5-free_dog.c | Conatins a function that frees dogs.
