#include "function_pointers.h"

/**
 * print_name - prints name using pointer to function
 * @name: name to be printed
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
