#include "main.h"

/**
 * _memcpy - copies memory area from source to destination
 * @n: Number of bytes
 * @dest: Destination of variable
 * @src: Source of variable
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
