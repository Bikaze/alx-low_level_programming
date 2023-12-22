#include "hash_tables.h"
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
