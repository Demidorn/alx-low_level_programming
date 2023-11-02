#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hash table
 * @size: size of the array
 *
 * Return: tash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table *hash = malloc(sizeof(hash_table_t));
	unsigned long int j = 0;

	if (!hash)
		return (NULL);
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
		return (NULL);
	hash->size = size;

	while (j < size)
	{
		hash->array[j] = NULL;
		j++;
	}
	return (hash);
}
