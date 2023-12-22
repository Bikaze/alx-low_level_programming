#include "hash_tables.h"

void free_list(hash_node_t *head);
/**
  *hash_table_delete - deletes hash table @ht
  *@ht: the hash table to delete
  *Return: nothing
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
  *free_list - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_list(hash_node_t *head)
{
	hash_node_t *ptr;
	hash_node_t *tmp;

	if (!head)
		return;
	ptr = head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr->key);
		free(ptr->value);
		free(ptr);
		ptr = tmp;
	}
	head = NULL;
}
