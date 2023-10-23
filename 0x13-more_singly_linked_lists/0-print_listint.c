#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *print_listint - print all elements of a list(structure)
  *@h: a pointer to a listint_t list
  *Return: count of printed elements
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
