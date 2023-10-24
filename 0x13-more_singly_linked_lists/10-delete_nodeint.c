#include "lists.h"
#include <stdlib.h>
/**
  *delete_nodeint_at_index - getting/ a node at the index index
  *@head: pointer to the start of the list
  *@index: an index from which to delete a node to return
  *Return: pointer to the value of the node
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int count = 0;

	if (!head)
	{
		return (-1);
	}
	else
	{
		tmp = *head;
		while (tmp && count < index)
		{
			if (count == index - 1)
			{
				del = tmp->next;
				tmp->next = tmp->next->next;
				free(del);
				return (1);
			}
			tmp = tmp->next;
			count++;
		}
	}
	return (-1);
}
