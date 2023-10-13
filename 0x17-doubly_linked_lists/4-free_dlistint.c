#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: start of node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
