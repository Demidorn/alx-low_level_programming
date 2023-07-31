#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  Displays the number of elements in a linked listint_t list
 * @h: linked list to print
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
