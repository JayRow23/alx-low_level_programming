#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number-  function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 if n  integer is prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if n is a prime recursively
 * @n: input to evaluate
 * @j: iterator
 * Return: 1 if n is prime number, else 0
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
