#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome- function that returns 1 if a string is a palindrome else 0
 * @s: input of strings
 * Return: 1 if a string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion- returns a length of a strings
 * @s: input of strings
 * Return:output of strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the input recursively for palindrome
 * @s: string input check
 * @i:iterator
 * @len: length of a string
 * Return: 1 if string is a palindrome and 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if  (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));
}
