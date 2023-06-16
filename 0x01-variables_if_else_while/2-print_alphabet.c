#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 ** Return: Always 0 (success)
 */

int main(void)
{
	/*Declare a variable and initialize it to the member of the range*/

	char my_char = 'a';

	while (my_char <= 'z')
	{
		putchar(my_char);
		my_char++;
	}
	putchar('\n');

	return (0);
}
