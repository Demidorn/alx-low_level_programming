#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_n - frees linked list
 * @head: head of node
 *
 * Return: nothing
 */

void free_listint_n(listint_t **head)
{
	listint_t *temp, *current;

	if (*head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: head of node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *new, *old, *current;

	old = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->n = head->n;
		new->next = old;
		old = new;

		current = old;

		while (current->next != NULL)
		{
			current = current->next;

			if (head == current)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint_n(&old);

				return (count);
			}
		}
		printf("[%p] %d\n", (void *)new, new->n);
		head = head->next;
		count++;
	}
	free_listint_n(&old);
	return (count);
}
