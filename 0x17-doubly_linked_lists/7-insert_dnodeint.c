#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *insert_dnodeint_at_index - get the node at index (index)
  *@h: pointer to the head of the list
  *@idx: the index of the node
  *@n: the numeber with which to create a node
  *Return: return the node at index
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr = *h;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (ptr)
	{
		if (index == idx)
		{
			new->prev = ptr->prev;
			if (idx == 0)
				*h = new;
			else
				(ptr->prev)->next = new;
			ptr->prev = new;
			new->next = ptr;
			return (new);
		}
		ptr = ptr->next;
		index++;
	}
	free(new);
	return (NULL);
}
