#include "main.h"

/**
 * flip_bits - flips integers from one to another
 * @n: first integer
 * @m: second integer
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	int i, j;

	while (n > 0 || m > 0)
	{
		i = (n & 1);
		j = (m & 1);

		if (i != j)
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
