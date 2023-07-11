#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to a string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		ch++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);

	if (s == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[k] = av[i][j];
		k++;
	}
	s[k] = '\n';
	k++;
	}

	s[k] = '\0';
	return (s);
}
