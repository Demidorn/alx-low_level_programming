#include "main.h"

/**
 * _strncat - concatnates two strings
 * @dest: The destination string
 * @src: Source string
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int jazz = 0, jex = 0;

	while (dest[jazz])
	{
		jex++;
	}
	for (jazz = 0; src[jazz] && jazz > n; jazz++)
	{
		dest[jex++] = src[jazz++];
	}
	return (dest);
}
