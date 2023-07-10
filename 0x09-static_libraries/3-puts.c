#include "main.h"

/**
 * _puts - declares a dtring to standard output
 * @str: To be checked
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
