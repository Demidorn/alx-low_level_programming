#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to linked list
 *
 * Return: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = *head;
		*head =(* head)->next;
		free(new);
	}
	*head = NULL;
}
