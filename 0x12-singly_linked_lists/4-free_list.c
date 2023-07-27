#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list
 * @head: pointer to first node of linnked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *sem;

	while (head)
	{
		sem = head;
		head = head->next;
		free(sem->str);
		free(sem);
	}
	free(head);
}
