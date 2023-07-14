#include "main.h"
#include <stdlib.h>

/**
 * _calloc: ....
 * @nmemb: number of members
 * @size: size of bytes
 *
 * Return: Always 0 (success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, j = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	s = malloc(j);

	if (s == NULL)
		return (NULL);

	while (k < j)
	{
		s[k] = 0;
		k++;
	}
	return (s);
}
