#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: First pointer of a string
 * @needle: Second pointer of a string
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (needle + i);
		}
	}
	return (NULL);
}
