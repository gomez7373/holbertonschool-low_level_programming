#include "main.h"
/*
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	char s;
	int g = 0;

	while (g <= 9)
{
	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
	g++;
}
}
