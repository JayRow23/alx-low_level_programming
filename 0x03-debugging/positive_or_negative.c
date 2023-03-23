#include "main.h"
/**
 * positive_or_negative - checking the correct output when given a case of 0
 * @i: parameter check for positive or negative
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
