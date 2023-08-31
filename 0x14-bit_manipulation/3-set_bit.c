#include "main.h"

/**
 * set_bit - sets the value of a bot to 1 at a given index
 * @n: pointer to bits
 * @index: begining of node
 *
 * Return: 1 if it worked , -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
