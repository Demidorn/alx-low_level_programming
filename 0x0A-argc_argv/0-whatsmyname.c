#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array that contains commandline arguments
 * Return: (0) when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
