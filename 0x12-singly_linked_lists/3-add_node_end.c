#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @str: string to add to the node
 * @head: original linked list
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *sem;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));

		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			sem = *head;

			while (sem->next)
				sem = sem->next;

			sem->next = new_list;
			return (sem);
		}
	}
	return (NULL);
}

/**
 * _strlen - returns length of a string
 * @d: string count
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
