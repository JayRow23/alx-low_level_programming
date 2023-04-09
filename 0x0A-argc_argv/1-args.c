#include "main.h"
/**
 * main- program that prints a number followed by newline
 * @argv: arguments
 * @argc: number of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
