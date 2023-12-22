#include "hash_tables.h"

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
