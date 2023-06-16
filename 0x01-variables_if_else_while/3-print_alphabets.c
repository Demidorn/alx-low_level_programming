#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Declare variable char
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
