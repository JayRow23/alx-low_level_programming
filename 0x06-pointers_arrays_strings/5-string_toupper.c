#include "main.h"
/**
 * string_toupper - changes all lowercase letters to  uppercase
 * @str: string to be converted
 * Return: strings
 */
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
	}
	return (str);
}
