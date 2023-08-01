#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to linked list array
 *
 * Return:  the head node’s data (n) otherwise 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	*head = temp;

	return (n);
}
