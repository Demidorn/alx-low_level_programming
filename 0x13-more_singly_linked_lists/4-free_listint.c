#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to first node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *num;

	while (head != NULL)
	{
		num = head;
		head = head->next;
		free(num);
	}
}
