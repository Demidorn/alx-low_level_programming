#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Return: Numbers from 0 through 14
 */

void more_numbers(void)
{
	int i, x;

	for (x = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
		if (x > 9)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		
		}
		_putchar('\n');
	}
}
