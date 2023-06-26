#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of elements of integers
 * @n: Number of elements of array to be printed
 * @a: Array of integers
 * Return: Void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
