#include "main.h"

/**
 * print_alphabet - Make the alphabet
 *
 ** Return: void
 */

void print_alphabet(void)
{
	char ness = 'a';
	while (ness <= 'z')
	{
		_putchar(ness);
		ness++;
	}
	_putchar('\n');

}
