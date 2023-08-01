#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	listint_t *new;

	while (*h != NULL)
	{
		new = *h;
		*h = (*h)->next;
		free(new);
		k++;
	}
	*h = NULL;
	return (k);
}
