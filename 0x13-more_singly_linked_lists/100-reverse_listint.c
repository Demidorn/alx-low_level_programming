#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;

	listint_t *new_node, *new = *head;

	while (new != NULL)
	{
		new_node = new->next;
		new->next = old;
		old = new;
		new = new_node;
	}

	*head = old;
	return (*head);
}
