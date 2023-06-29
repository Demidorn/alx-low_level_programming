#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array of integer
 * @n: Number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int dorn, zim;

	for (zim = n - 1; zim >= n / 2; zim--)
	{
	dorn = a[n - 1 - zim];
	a[n - 1 - zim] = a[zim];
	a[zim] = dorn;
	}

}
