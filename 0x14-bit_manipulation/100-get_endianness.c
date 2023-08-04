#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: success (0)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;

	if (*c == 1)
		return (1);
	return (0);
}
