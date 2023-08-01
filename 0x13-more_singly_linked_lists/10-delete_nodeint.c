#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index linked list
 * @head: pointer to head of linked list
 * @index: begining of node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;

	listint_t *old = NULL;

	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	while (new != NULL && j < index)
	{
		old = new;
		new = new->next;
		j++;
	}

	if (new == NULL || j < index)
		return (-1);

	if (old == NULL)
		*head = new->next;
	else
		old->next = new->next;

	free(new);
	return (1);
}
