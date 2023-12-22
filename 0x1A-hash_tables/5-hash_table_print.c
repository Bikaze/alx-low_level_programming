#include "hash_tables.h"

void iterate(hash_node_t *list);
/**
  *hash_table_print - prints hash table @ht
  *@ht: the hash table to print
  *Return: nothing
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int k = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (k == 1 && ht->array[i] != NULL)
		{
			printf(", ");
			k = 0;
		}
		iterate(ht->array[i]);
		if (ht->array[i] != NULL)
			k = 1;
	}
	printf("}\n");
}


/**
  *iterate - iterates over a linked list to print its keys
  *@list: list to iterate over
  *Return: nothing
  */

void iterate(hash_node_t *list)
{
	hash_node_t *ptr = list;

	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->next != NULL)
			printf(", ");
		ptr = ptr->next;
	}
}
