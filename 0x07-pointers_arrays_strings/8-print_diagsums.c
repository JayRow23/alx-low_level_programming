#include "main.h"
/**
 * print_diagsums- prints the sum of the two diagonals
 * of a square matrix of int
 * @a: the matrix of integers
 * @size: the size of the matrix
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int jet, sum = 0, sum1 = 0;

	for (jet = 0; jet < size; jet++)
	{
		sum += a[jet];
		a += size;
	}
	a -= size;
	for (jet = 0; jet < size; jet++)
	{
		sum1 += a[jet];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
