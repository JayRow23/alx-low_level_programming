#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: destination strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
