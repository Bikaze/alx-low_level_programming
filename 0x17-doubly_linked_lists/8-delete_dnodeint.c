#include "lists.h"
#include <stdlib.h>
/**
  *delete_dnodeint_at_index - delete the node at index (index)
  *@head: pointer to the head of the list
  *@index: the index of the node
  *Return: return the node at index
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int n = 0;

	while (ptr != NULL)
	{
		if (n == index)
		{
			if (n == 0)
			{
				ptr = ptr->next;
				free(*head);
				*head = ptr;
				return (1);
			}
			else
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
				free(ptr);
				return (1);
			}
		}
		ptr = ptr->next;
		n++;
	}
	return (-1);
}
