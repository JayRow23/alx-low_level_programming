#include "main.h"
/**
 * _strstr- function that locates a substring.
 * @haystack: location of the string
 * @needle: the substring needle in the string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int jet;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		jet = 0;

		if (haystack[jet] == needle[jet])
		{
			do {
				if (needle[jet + 1] == '\0')
					return (haystack);

				jet++;

			}	while (haystack[jet] == needle[jet]);
		}

		haystack++;
	}
	return ('\0');
}
