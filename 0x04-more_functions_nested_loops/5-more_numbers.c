#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * @x: First character function
 * @z: Second character function
 * Return: 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)
{
	char x, z;

	for (x = 0; x <= 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
