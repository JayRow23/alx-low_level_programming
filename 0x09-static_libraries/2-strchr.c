#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: location of strings
 * @c: location of char
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
