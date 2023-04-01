#include "main.h"
/*
 * puts2 - printing strings.
 * main - function that prints every other character of a string
 * _putchar: print special chara
 * @str: input
 * Return: Always 0
 */
void puts2(char *str);
{
	int l = 0;
	int j = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	j = l - 1;
	for (o = 0; o <= j; o++)
	{
	if (o % 2 == 0)
	}
	_putchar(str[o]);

	_putchar('\n');
}
