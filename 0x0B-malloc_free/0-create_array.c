#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @c:creates an array of chars
 * @size: sizmain: creates an array of chars.
 * Return: NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
