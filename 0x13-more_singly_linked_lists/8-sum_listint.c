#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - prints sum of all the data (n) of a listint_t linked list
 * @head: start of the node
 *
 * Return: sum of nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
