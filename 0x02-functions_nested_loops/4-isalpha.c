#include "main.h"

/**
 * int _isalpha - Checks character
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{

	if ((c >= 48 && c <= 57) || (c >= 90 && c <= 122))
	{
		return (1);
	}
	return (0);
}
