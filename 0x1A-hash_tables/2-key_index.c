#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of the hash table
 *
 * Return: value of the hash (index of hash table)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
