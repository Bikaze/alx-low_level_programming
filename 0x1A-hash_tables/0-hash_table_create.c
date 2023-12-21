#include "hash_tables.h"
/**
  *hash_table_create - creates a hash table
  *@size: size of the hash table
  *Return: an empty hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	table->size = size;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
