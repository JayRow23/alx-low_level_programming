#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string to input
 * @s2: other string to input
 * Return: pinter to a newly allocated space create (success) or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int j = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	j = 0;
	k = 0;

	if (s1)
	{
		while (j < len1)
		{
			s3[j] = s1[j];
			j++;
		}
	}
	if (s2)
	{
		while (j < (len1 + len2))
		{
			s3[j] = s2[k];
			j++;
			k++;
		}
	}
	s3[j] = '\0';
	return (s3);
}
