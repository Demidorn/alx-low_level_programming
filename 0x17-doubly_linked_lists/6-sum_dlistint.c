#include "lists.h"

/**
 * sum_dlistint - gets sum of all data of linked list
 * @head: start node
 * Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);

}
