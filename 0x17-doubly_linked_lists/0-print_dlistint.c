#include "lists.h"
/**
 * print_dlistint - prints doulbly linked list
 * @h: start node of the list
 *
 * Return: items of a linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
