#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		d++;
	}
	return (d);
}
