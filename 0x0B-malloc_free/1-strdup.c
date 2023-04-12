#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *jay;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	jay = malloc(sizeof(char) * (j + 1));
	if (jay == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		jay[k] = str[k];
	return (jay);
}
