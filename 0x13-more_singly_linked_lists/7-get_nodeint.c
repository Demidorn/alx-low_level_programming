#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of the linked list
 * @head: head to linked list
 * @index: node to stop at
 *
 * Return: The node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head != NULL)
	{
		if (k  == index)
			return (head);

		head = head->next;
		k++;
	}
	return (NULL);
}
