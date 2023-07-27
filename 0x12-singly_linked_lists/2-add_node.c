#include "lists.h"
#include <stdlib.h>
#include  <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @str: the string to add to the node
 * @head: the original linked list
 *
 * Return: Address of a new list or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *sem;

	if (head != NULL && str != NULL)
	{
		sem = malloc(sizeof(list_t));
		if (sem == NULL)
			return (NULL);
		sem->str = strdup(str);
		sem->len = _strlen(str);
		sem->next = *head;


		*head = sem;

		return (sem);
	}
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @d: count string length
 *
 * Return: string length
 */

int _strlen(const char *d)
{
	int c = 0;

	while (*d)
	{
		d++;
		c++;
	}
	return (c);
}
