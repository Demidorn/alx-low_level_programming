#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: Number to be checked
 * Return: Factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
