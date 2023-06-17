#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Declare variable
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str, e, q;

	e = 'e';
	q = 'q';

	for (str = 'a'; str <= 'z'; str++)
	{
		if (str != e && str != q)
		putchar(str);
	}
	putchar('\n');

	return (0);
}
