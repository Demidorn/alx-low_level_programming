#include "lists.h"
#include <stdlib.h>

/**
 * list_len - show the number of elements in a list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		d++;
		h = h->next;
	}
	return (d);
}
