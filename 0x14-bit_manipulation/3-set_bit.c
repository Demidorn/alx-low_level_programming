#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: beging of the node
 * @n: pointer to bits
 *
 * Return: 1 if it worked, or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL <<  index);
	return (1);
}
