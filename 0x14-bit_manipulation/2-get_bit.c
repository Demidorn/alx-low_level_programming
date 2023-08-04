#include "main.h"

/**
 * get_bit - gets e value of a bit at a given index
 * @index: begining of value
 * @n: integer to be checked
 *
 * Return: the value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	d = 1UL << index;

	return ((n & d) ? 1 : 0);
}
