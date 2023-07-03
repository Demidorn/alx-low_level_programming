#include "main.h"

/**
 *  _strspn - displays the prefix of a substring
 *  @s: Initial pointer string
 *  @accept: Pointer from which variable byte a picked
 *  Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	int zex = 0;

	for (n = 0; accept[n] != '\0'; n++)
	{
		if (accept[n] == s[i])
		{
			count++;
			zex = 1;
		}
		if (zex  == 0)
		return	(count);
	}
	}
	return (count);
}
