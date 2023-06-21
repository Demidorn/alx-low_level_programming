#include "main.h"

/**
 * print_last_digit - Checks to print last digit
 * @c: Number to be checked
 * Return: Always 0
 */

int print_last_digit(int c)
{
	int dorn;

	dorn = c % 10;
	if (dorn < 0)
	{
		dorn = dorn * -1;
	}
	_putchar(dorn + '0');
	return (dorn);
}
