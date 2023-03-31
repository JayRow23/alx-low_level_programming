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

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
