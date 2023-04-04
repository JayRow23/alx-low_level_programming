#include "main.h"
/**
 * _strspn- function that gets the length of a prefix substring.
 * @s: location of strings
 * @accept: prefix to be measured
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int jet;

	while (*s)
	{
		for (jet = 0; accept[jet]; jet++)
		{
			if (*s == accept[jet])
			{
				bytes++;
				break;
			}

			else if (accept[jet + 1] == '\0')
					return (bytes);
		}

		s++;
	}

	return (bytes);
}
