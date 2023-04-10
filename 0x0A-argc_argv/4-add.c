#include "main.h"
#include <stdio.h>
/**
 * main- program that adds positive numbers.
 * @argv: arguments
 * @argc: number of arguments
 * Return:1 if Error, 0 if fails
 */
int main(int argc, char *argv[])
{
	int j, add = 0;

	for (j = 1; j < argc; j++)
	{
		if (*argv[j] < 49 || *argv[j] > 57)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
