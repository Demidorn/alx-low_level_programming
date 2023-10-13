#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked dlistint_t list
 * @h: start node
 * Return: Length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
