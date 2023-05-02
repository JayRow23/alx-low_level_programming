#include "main.h"
/**
 *_isalpha - function is to check for alphabet charater
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
