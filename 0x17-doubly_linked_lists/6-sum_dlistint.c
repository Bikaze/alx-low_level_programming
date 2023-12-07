#include "lists.h"
/**
  *sum_dlistint - sum the elements of a dlistint_t list
  *@head: pointer to the head of the list
  *Return: return the sum of n values of nodes in the list
  */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *ptr = head;
	int n = 0;

	while (ptr)
	{
		n += ptr->n;
		ptr = ptr->next;
	}
	return (n);
}
