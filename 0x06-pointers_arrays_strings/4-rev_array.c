#include "main.h"
/**
 * reverse_array - reversing the content of an array of int
 * @n: function parameter
 * @a: function parameter
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < n / 2; j++)
	{
		k = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = k;
	}
}
