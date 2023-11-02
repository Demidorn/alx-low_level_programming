#include "hash_tables.h"

/**
  * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table pointer
 * @key: key assign to hash node
 * @value: value assign to this key
 *
 * Return: 1 when successful otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;

	if (!key || strlen(key) == 0 || !ht)
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}

		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (0);
	}

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
