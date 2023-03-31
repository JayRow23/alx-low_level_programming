#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: 0
 */
char *leet(char *str)
{
	int j;
	int k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (str[j] == a[k])
				str[j] = b[k];
		}
	}
	return (str);
}
