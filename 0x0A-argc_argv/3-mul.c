#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- print the result of the multiplication, followed by a new line
 * @argv: arguments
 * @argc: number of arguments
 * Return: Always 0 if true, 1 if false.
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc == 1)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j * k);
		return (0);
	}
		printf("Error\n");
		return (1);
}
