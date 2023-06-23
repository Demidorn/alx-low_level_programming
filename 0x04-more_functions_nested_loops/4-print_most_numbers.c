#include "main.h"

/**
 * print_most_numbers - prints most numbers 0 through 9
 * 
 * Return: Numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else 
		{
			_putchar(x + '0');
		}
	
	}
	_putchar('\n');
}
