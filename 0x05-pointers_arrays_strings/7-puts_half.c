#include "main.h"
/**
 * puts_half- prints half of a string, followed by a new line.
 * @str: input
 * if odd len, n: (length_of_the_string - 1) / 2
 * Return: half of input
 */
void puts_half(char *str)
{
	int j, n, roles;

	roles = 0;

	for (j = 0; str[j] != '\0'; j++)
		roles++;

	n = (roles / 2);

	if ((roles % 2) == 1)
		n = ((roles + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
