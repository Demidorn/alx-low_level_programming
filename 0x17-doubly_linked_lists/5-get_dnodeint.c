#include "lists.h"

/**
 * get_dnodeint_at_index - prints nth node of linked list
 * @head: start node
 * @index: unsigned int
 * Return: pointer to index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int x = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (x == index)
			return (temp);
		x++;
		temp = temp->next;

	}

	return (NULL);

}
