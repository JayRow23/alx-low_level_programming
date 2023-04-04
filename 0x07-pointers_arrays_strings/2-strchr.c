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
	int jet;

	for (jet = 0; s[jet] > '\0'; jet++)
	{
		if (s[jet] == c)
			return (s + jet);
	}
	return ('\0');
}
