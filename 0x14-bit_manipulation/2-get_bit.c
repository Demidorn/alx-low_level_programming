#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be checked
 * @index: beginning of the value
 *
 * Return: Value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int d;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	d = 1UL << index;
	return ((n & d) ? 1 : 0);
}
