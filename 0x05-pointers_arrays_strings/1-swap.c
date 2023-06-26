#include "main.h"

/**
 * swap_int - swaps the values of two integers a and b.
 * @a: First integer
 * @b: Second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
