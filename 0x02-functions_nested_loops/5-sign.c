#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: Character to be checked
 * Return: 1 when characetrgreater than or anything
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
