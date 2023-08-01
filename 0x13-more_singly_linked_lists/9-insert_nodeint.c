#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: begining of the node
 * @n: old node
 * @idx: new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, count = 0;
	listint_t *current = *head;
	listint_t *new_node, *prev;

	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (count < idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		prev = *head;

		for (i = 0; i < idx - 1; i++)
		{
			prev = prev->next;
		}
		new_node->next = prev->next;
		prev->next = new_node;
	}
	return (new_node);
}



