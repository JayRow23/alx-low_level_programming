#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet in lower case x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int g;
	int h;

	for (g = 1; g <= 10; g++)
	{
		for (h = 'a'; h <= 'z'; h++)
			_putchar(h);
		_putchar('\n');
	}
}
