#include "lists.h"
#include <stdio.h>
#include "lists.h"
/**
  *list_len - length of the list
  *@h: pointer to the start of the list
  *Return: count of the nodes
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
