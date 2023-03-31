#include "main.h"
/**
 * _strcmp - comparetion of two strings
 * @s1: strings input
 * @s2: strings input
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			if (s1[j] < s2[j])
				return (s1[j] - s2[j]);
			else if (s1[j] > s2[j])
				return (s1[j] - s2[j]);
		}
		else
			return (0);
	}
	return (0);
}
