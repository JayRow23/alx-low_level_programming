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
	int destlen = 0;
	int srclen = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		destlen++;
	for (j = 0; src[j] != '\0'; j++)
		srclen++;
	for (j = 0; j < n; j++)
		dest[destlen + j] = src[j];
	return (dest);
}
