#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to linked lists
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *dew = h;

	while (dew != NULL)
	{
		printf("%d\n", dew->n);
		count++;
		dew = dew->next;
	}
	return (count);
}
