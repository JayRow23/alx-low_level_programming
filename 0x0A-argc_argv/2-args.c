#include "main.h"
/**
 * main- program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
	int jmult = 0;

	if (argc > 0)
	{
		/*while printing arguments*/
		while (jmult < argc)
		{
			printf("%s\n", argv[jmult]);
			jmult++;
		}
	}
	return (0);
}
