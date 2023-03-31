#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: destination string
 * @src: the destination string
 * @n: number of character to be append
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
