#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar("%d",str);
		putchar('\n');
	}

	return (0);
}