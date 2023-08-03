#include "main.h"

/**
 * print_binary -  prints the binary representation of a numbe
 * @n: number to be checked
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int figure, d;

	if (n == 0)
		_putchar('0');

	for (figure = 0, d = sizeof(n) * 8 - 1; d >= 0; d--)
	{
		if ((n >> d) & 1)
			figure = 1;

		if (figure == 1)
			((n >> d) & 1) ? _putchar('1') : _putchar('0');
	}
}
