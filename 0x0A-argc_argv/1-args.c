#include <stdio.h>
/**
 * main - prints number of arguments passed onto it
 * @argc: number of command line argumrnt
 * @argv: array that contains program command line argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
