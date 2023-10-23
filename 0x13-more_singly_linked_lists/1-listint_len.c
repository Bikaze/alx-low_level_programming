#include <stdlib.h>
#include "lists.h"
/**
  *listint_len - count all elements of a list(structure)
  *@h: a pointer to a listint_t list
  *Return: count of printed elements
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
