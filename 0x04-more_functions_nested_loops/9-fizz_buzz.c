#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 to 100
 * but for multiples of three prints Fizz instead to the number
 * and for multiples of five prints Buzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (x % 3 == 0)
	{
	printf("Fizz");
	}
	else if (x % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);

}
