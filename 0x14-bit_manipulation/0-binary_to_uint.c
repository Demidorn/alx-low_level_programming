#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to convert
 *
 * Return: the converted number, or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		val = val * 2 + (*b - '0');
		b++;
	}
	return (val);
}
