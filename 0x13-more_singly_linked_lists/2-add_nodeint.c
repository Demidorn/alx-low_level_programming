#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: array of linked lists
 * @head: pointer to header of elements
 * Return: Address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	num = malloc(sizeof(listint_t));
	if (num != NULL)
	{
		num->n = n;
		num->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		num->next = *head;
	*head = num;

	return (num);
}
