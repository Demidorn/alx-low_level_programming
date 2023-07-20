#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: ...
 * @n: ....
 *
 * Return: ....
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *demi;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			demi = va_arg(args, char *);

			if (demi == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", demi);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
