#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: dlistint_t **
 * @index: int
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = *head;
	dlistint_t *hold = temp;
	unsigned int counter =  0;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		if (!(*head)->next)
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		else
		{
			temp->next->prev = NULL;
			(*head) = (*head)->next;
			free(temp);
			return (1);
		}
	}
	while (temp)
	{
		if (counter + 1 == index)
		{
			hold = hold->next;
			if (!temp->next->next)
				temp->next = NULL;
			else
			{
				temp->next = temp->next->next;
				temp->next->prev = temp;
			}
			free(hold);
			return (1);
		}
		temp = temp->next;
		hold = hold->next;
		counter++; }
	return (-1);
}
