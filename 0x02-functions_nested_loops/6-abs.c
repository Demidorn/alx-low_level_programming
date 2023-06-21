#include "main.h"

/**
 * _abs - Prints absolute value of an integer
 * @n: Number to be computed
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return(abs_val);
	}
	return (n);

}
