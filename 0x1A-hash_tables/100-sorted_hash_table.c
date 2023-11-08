#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Structure to represent a key-value pair */
typedef struct shash_node_s {
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/* Structure to represent a sorted hash table */
typedef struct shash_table_s {
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* Create and initialize a sorted hash table */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	
	for (unsigned long int i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	
	return (ht);
}

/* Add a key-value pair to the sorted hash table */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *new_pair = malloc(sizeof(shash_node_t));
	
	if (!new_pair)
		return (0);
	
	new_pair->key = strdup(key);
	new_pair->value = strdup(value);
	new_pair->next = ht->array[index];
	ht->array[index] = new_pair;

    /* Add to the sorted linked list */
	if (!ht->shead || strcmp(key, ht->shead->key) < 0)
	{
		new_pair->sprev = NULL;
		new_pair->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_pair;
		ht->shead = new_pair;
	}
	else
	{
		shash_node_t *current = ht->shead;
		
		while (current->snext && strcmp(key, current->snext->key) > 0)
		{
			current = current->snext;
		}
		new_pair->sprev = current;
		new_pair->snext = current->snext;
		if (current->snext)
			current->snext->sprev = new_pair;
		current->snext = new_pair;
	}
	return (1);
}

/* Retrieve the value associated with a key from the sorted hash table */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht || !key || *key == '\0')
	       	return (NULL);

	shash_node_t *current = ht->shead;

	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
		current = current->snext;
	}

	return (NULL);  // Key not found
}

/* Print the hash table using the sorted linked list */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	printf("{");
	
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
		{
			printf(", ");
		}
		current = current->snext;
	}
	printf("}\n");
}

/* Print the hash table in reverse order using the sorted linked list */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	printf("{");
	
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
		{
			printf(", ");
		}
		current = current->sprev;
	}
	printf("}\n");
}

/* Delete the sorted hash table and free its memory */
void shash_table_delete(shash_table_t *ht)
{
    if (!ht) return;

    for (unsigned long int i = 0; i < ht->size; i++) {
        shash_node_t *current = ht->array[i];
        while (current) {
            shash_node_t *temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    shash_node_t *current = ht->shead;
    while (current) {
        shash_node_t *temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }

    free(ht->array);
    free(ht);
}

unsigned long int key_index(const unsigned char *key, unsigned long int size) {
    unsigned long int hash_value = hash_djb2(key);
    return hash_value % size;
}

int main() {
    shash_table_t *ht = shash_table_create(10);

    shash_table_set(ht, "name", "John");
    shash_table_set(ht, "age", "30");
    shash_table_set(ht, "city", "New York");

    shash_table_print(ht);
    shash_table_print_rev(ht);

    char *value = shash_table_get(ht, "age");
    if (value) {
        printf("Age: %s\n", value);
    } else {
        printf("Key not found\n");
    }

    value = shash_table_get(ht, "country");
    if (value) {
        printf("Country: %s\n", value);
    } else {
        printf("Key not found\n");
    }

    shash_table_delete(ht);

    return 0;
}
