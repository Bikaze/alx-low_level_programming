#include "lists.h"
#include <stdlib.h>
/**
  *get_nodeint_at_index - getting/ a node at the index index
  *@head: pointer to the start of the list
  *@index: an index from which to find a node to return
  *Return: pointer to the value of the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t tmp;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	else
	{
		tmp = head;
		while (tmp != NULL && count <= index)
		{
			if (count == index)
				return (tmp->n);
			tmp = tmp->next;
			count++;
		}
	}
	return (NULL);
}
