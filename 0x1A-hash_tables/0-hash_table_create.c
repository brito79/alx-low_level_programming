#include "hash_tables.h"
/**
 * hash_table_create - Creating the Hash Table
 * @size: The size of the Hash Table
 * Return: Pointer to the Hash Table or NULL on fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	table->size = size;

	if (table == NULL)
	{
		return (NULL);
	}
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
