#include "hash_tables.h"

/**
  *iterate_list - iterates over a linked list to find a key
  *@list: list to iterate over
  *@key: the key to find
  *Return: the address if found the key or 'NULL' otherwise
  */

hash_node_t *iterate_list(hash_node_t *list, const char *key)
{
	int i = 0;
	hash_node_t *ptr = list;

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
