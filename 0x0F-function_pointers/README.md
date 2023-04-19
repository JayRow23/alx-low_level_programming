0x0F. C - Function pointers
 By: Alexandre Gautier
Apr 19, 2023 8:00 AM

Tasks
0. What's my name
mandatory
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));
Directory: 0x0F-function_pointers
File: 0-print_name.c


1. If you spend too much time thinking about a thing, you'll never get it done
mandatory
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

File: 1-array_iterator.c


2. To hell with circumstances; I create opportunities
mandatory
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1

File: 2-int_index.c


3. A goal is not always meant to be reached, it often serves simply as something to aim at
mandatory
Write a program that performs simple operations.

You are allowed to use the standard library
Usage: calc num1 operator num2
You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int

This task requires that you create four different files.

3-calc.h

This file should contain all the function prototypes and data structures used by the program. You can use this structure:

3-main.c

This file should contain your main function only.

File: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
