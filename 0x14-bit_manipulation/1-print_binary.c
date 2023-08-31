#include "main.h"

/**
 * print_binary - prints binary replresentation of a number
 * @n: character to be checked
 *
 * Return: Binary otherwise 0.
 */

void print_binary(unsigned long int n)
{
	int val, d;

	if (n == 0)
		_putchar('0');

	for (val = 0, d = sizeof(n) * 8 - 1; d >= 0; d--)
	{
		if ((n >> d) & 1)
			val = 1;

		if (val == 1)
			((n >> d) & 1) ? _putchar('1') : _putchar('0');
	}
}
