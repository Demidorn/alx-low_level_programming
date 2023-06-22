#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit from 0 through 9
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	for (c = 0; c <= 9, c++)
	{
		if (isdigit(c))
		{
			return (1);
		}
		return (0);
	}
}
