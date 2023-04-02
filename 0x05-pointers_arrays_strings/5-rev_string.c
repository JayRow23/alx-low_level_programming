#include "main.h"
/**
 * rev_string- reversing a string
 * @s: input string
 * Return: sting in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int roles = 0;
	int j;

	while (s[roles] != '\0')
		roles++;
	for (j = 0; j < roles; j++)
	{
		roles--;
		rev = s[j];
		s[j] = s[roles];
		s[roles] = rev;
	}
}
