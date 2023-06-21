#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	int s;

	for (j = 1; j <= 10; j++)
	{
		for (s = 97; s <= 122; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
