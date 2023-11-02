#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: const hash_table_t
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");

	i = 0;
	x = 0;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (x == 0)
					printf("'%s': '%s'", temp->key, temp->value);
				else
					printf("%s'%s': '%s'", ", ", temp->key, temp->value);

				x++;

				temp = temp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
