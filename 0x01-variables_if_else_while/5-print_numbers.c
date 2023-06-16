#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	x = 0;
	while (x < 10)
	{
		putchar(x + '0');

		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++
	}
	putchar('\n');

	return (0);
}
