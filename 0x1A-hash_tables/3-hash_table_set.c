#include "hash_tables.h"

hash_node_t *iterate_list(hash_node_t *list, const char *key);
int add_node(hash_node_t **head, const char *key, const char *value);
/**
  *hash_table_set - adds an element to the hash table
  *@ht: hash table to add or update the key/value
  *@key: key to add to the table
  *@value: value of @key
  *Return: 1 if succeeded or 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *slot;
	hash_node_t *found;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	slot = (ht->array)[index];
	found = iterate_list(slot, key);

	if (found != NULL)
	{
		free(found->value);
		found->value = strdup(value);
	}
	else
	{
		add_node(&slot, key, value);
	}
	return (1);
}

/**
  *iterate_list - iterates over a linked list to find a key
  *@list: list to iterate over
  *@key: the key to find
  *Return: the address if found the key or 'NULL' otherwise
  */

hash_node_t *iterate_list(hash_node_t *list, const char *key)
{
	hash_node_t *ptr = list;

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}

/**
  *add_node - adding a node at the front
  *@head: pointer to the start of the list
  *@key: key of the entry
  *@value: value of the entry
  *Return: 1 if succeeded or 0 otherwise
  */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *ptr;

	ptr = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (0);
	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = *(head);
	*(head) = ptr;
	return (1);
}
