#include "main.h"

/**
 * _memcpy - copies memory area from source to destination
 * @n: Number of bytes
 * @dest: Destination of variable
 * @src: Source of variable
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
