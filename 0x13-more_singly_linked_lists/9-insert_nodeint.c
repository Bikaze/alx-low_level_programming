#include "lists.h"
/**
  *insert_nodeint_at_index - insert an element in a list(structure)
  *@head: a pointer to a pointer to a listint_t list
  *@idx: index at which to insert
  *@n: the number with which to create a node
  *Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !*head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}
