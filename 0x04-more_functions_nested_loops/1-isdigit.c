#include "main.h"
#include <ctype.h>

/**
 * _isdigit - prints numbers 0 through 9
 * @c: Character to be checked
 * Return: 1 if character is digit or o otherwise
 */

int _isdigit(int c)
{
	for (c = '0'; c <= '9'; c++)
	{
		if (isdigit(c))
		
			return (1);
		
	}
	return (0);
}
