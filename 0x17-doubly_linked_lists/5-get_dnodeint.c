#include "lists.h"
/**
  *get_dnodeint_at_index - get the node at index (index)
  *@head: pointer to the head of the list
  *@index: the index of the node
  *Return: return the node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int n = 0;

	while (ptr)
	{
		if (n == index)
			return (ptr);
		ptr = ptr->next;
		n++;
	}
	return (NULL);
}
