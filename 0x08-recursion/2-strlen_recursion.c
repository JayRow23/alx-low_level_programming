#include "main.h"
/**
 * _strlen_recursion- function that returns the length of a string.
 * @s: input of strings
 * Return: length of strings
 */
int _strlen_recursion(char *s)
{
	int jlon = 0;

	if (*s)
	{
		jlon++;
		jlon += _strlen_recursion(s + 1);
	}
	return (jlon);
}
