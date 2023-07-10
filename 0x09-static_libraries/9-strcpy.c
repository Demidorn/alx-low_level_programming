#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @src: Source value
 * @dest: Destination of value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
