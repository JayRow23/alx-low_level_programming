#include "main.h"
/**
 * _strpbrk- function that searches a string for any of a set of bytes.
 * @s: location of strings
 * @accept: any set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int jet;

	while (*s)
	{
		for (jet = 0; accept[jet]; jet++)
		{
			if (*s == accept[jet])
				return (s);
		}

		s++;
	}
	return ('\0');
}
