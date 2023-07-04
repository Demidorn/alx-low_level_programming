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
/*function finds the first occurrence of the*/
/*substring needle in the string haystack.*/
  /*The terminating null bytes (\0) are not compared*/
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		/*finds the first occurrence of the substring needle in the string haystack*/
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			/*Returns a pointer to the beginning of the located substring*/
			return (haystack);
	}
	/*NULL if the substring is not found*/
	return (NULL);
}
