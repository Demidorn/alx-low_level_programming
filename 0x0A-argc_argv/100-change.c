#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: number of command line arguments
 * @argv: the array that contains command line arg..
 * Return: Awalys 0
 */

int main(int argc, char *argv[])
{
	int cents, no_coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		no_coin += 1;
	}
	printf("%d\n", no_coin);
	return (0);
}
