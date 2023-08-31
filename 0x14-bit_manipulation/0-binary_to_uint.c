#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to string of chars
 *
 * Return: The converted number or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		len = len * 2 + (*b - '0');
		b++;
	}
	return (len);
}
