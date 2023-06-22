#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
