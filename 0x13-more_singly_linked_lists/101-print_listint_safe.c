#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: head of node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *new = head;
	const listint_t *const address = head;

	int j = 1;

	while (new != NULL)
	{
		printf("[%p] %d\n", (void *)new, new->n);
		count++;

		new = new->next;

		if (new == address && j)
		{
			j = 0;
		count = 0;

			while (head == address)
			{
				head = head->next;
				count++;
			}
		}
	}
	return (count);
}
