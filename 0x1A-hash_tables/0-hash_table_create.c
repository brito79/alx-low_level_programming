#include "hash_tables.h"
/**
 * hash_table_create - Creating the Hash Table
 * @size: The size of the Hash Table
 * Return: Pointer to the Hash Table or NULL on fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));


	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
