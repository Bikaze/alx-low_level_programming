#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint - adding a node at the front
  *@head: pointer to the start of the list
  *@n: a number with which to form a new node
  *Return: count of the nodes
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *(head);
	*(head) = ptr;
	return (ptr);
}

/**
  *insert_nodeint_at_index - inserts a node at the index index
  *@head: pointer to the start of the list
  *@n: number for which to create a node
  *@idx: an index from which to insert a node
  *Return: pointer to the value of the node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *curr, *new;
	unsigned int count = 1;

	if (!head || !*head)
	{
		return (NULL);
	}
	else
	{
		prev = curr = *head;

		if (idx == 0)
			return (add_nodeint(head, n));

		while (curr && count < idx)
		{
			if (count == idx)
			{
				new = (listint_t *)malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = curr;
				prev->next = new;
				return (new);
			}
			prev = curr;
			curr = curr->next;
			count++;
		}
	}
	return (NULL);
}
