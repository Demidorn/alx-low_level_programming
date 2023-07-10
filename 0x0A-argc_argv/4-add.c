#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line argumnets
 * @argv: array that contains command line arguments
 * Return: (0) when successful
 */

int main(int argc, char **argv)
{
	int s, k, add = 0;

	for (s = 1; s < argc; s++)
	{
		for (k = 0; argv[s][k] != '\0'; k++)
		{
			if (!isdigit(argv[s][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[s]);
	}
	printf("%d\n", add);
	return (0);
}
