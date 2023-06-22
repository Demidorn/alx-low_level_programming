#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is uppercase
 * @c: Character to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
