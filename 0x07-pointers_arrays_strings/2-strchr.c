#include "main.h"
#include <stdio.h>

/**
 * _strchr - searches for the first occurance of character c
 * @c: Character
 * @s: A pointer character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
