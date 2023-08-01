#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of the linked list
 * @head: pointer to linked list
 * @index: array of the linked list
 *
 * Return: The node otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	while (k < index)
	{
		if (head->next  == NULL)
			return (NULL);

		head = head->next;
		k++;
	}
	return (head);
}
