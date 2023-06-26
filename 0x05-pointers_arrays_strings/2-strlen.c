#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to get parameter of
 * Return: The length of the @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);

}
