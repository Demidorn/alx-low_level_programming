#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - loops in a linked list
 * @head: begining of node
 *
 * Return: The address of the node where the loop starts, or NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new = head;
	listint_t *old = head;

	while (old != NULL && old->next != NULL)
	{
		new = new->next;
		old = old->next->next;

		if (new == old)
		{
			new = head;

			while (new != old)
			{
				new = new->next;
				old = old->next;
			}
			return (new);
		}
	}
	return (NULL);
}
