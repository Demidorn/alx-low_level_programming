#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);
	return (d);
}
