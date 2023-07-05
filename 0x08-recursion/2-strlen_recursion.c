#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - return length of string
 * @s: String to be checked
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (strlen(s));
	}
	_strlen_recursion(s);
	return (0);
}
