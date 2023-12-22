#include "hash_tables.h"

/**
  *hash_table_get - gets an element associated with @key from the hash table
  *@ht: hash table
  *@key: key for which to retrieve the value
  *Return: value if found key or NULL if key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **slot;
	hash_node_t *found;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	slot = ht->array;
	found = iterate_list(slot[index], key);

	if (found != NULL)
		return (found->value);
	else
		return (NULL);
}
