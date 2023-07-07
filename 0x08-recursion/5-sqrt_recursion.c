#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - prints natural squareroot of a number
 * @n: Integer to be checked
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int i, k;

	if (i > k)
	{
		return (-1);
	}
	int s;

	s = i + (i - k) / 2;

	int w;

	w = s * s;

	if (w == n)
	{
		return (s);
	}
	else if (w > n)
	{
		return (_sqrt_recursion(n, i, s - 1));
	}
	else
	{
		return (_sqrt_recursion(n, s + 1, k));
	}
}
