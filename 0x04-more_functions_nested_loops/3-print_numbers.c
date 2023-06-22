#include "main.h"

/**
 *print_numbers - prints numbers from 0 to 9 
 * 
 * Return: Numbers 0 upto 9
 */

void print_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
