#include <stdlib.h>
#include "lists.h"
/**
  *sum_listint - count all elements of a list(structure)
  *@head: a pointer to a listint_t list
  *Return: sum of list elements
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (sum);
}
