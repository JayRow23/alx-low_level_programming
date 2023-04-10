#include "main.h"
/**
 * main- print the result of the multiplication, followed by a new line
 * @argv: arguments
 * @argc: number of arguments
 * @jrow: argv *argv param
 * Return: Always 0 if true, 1 if false.
 */
int main(int argc, char *argv[], jrow)
{
	int j, k;

	if (argc == 1)
	{
		j = jrow(argv[1]);
		k = jrow(argv[2]);
		printf("%d\n", j * k);
		return (0);
	}
		printf("Error\n");
		return (1);

}
