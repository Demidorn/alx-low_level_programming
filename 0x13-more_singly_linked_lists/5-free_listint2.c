#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to linked list
 *
 * Return: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *new, *d;

	if (head == NULL)
		return;

	d = *head;
	/*d = malloc(sizeof(listsint_t));*/

	while (d != NULL)
	{
		new = d;
		d = d->next;
		free(new);
	}
	*head = NULL;
}
