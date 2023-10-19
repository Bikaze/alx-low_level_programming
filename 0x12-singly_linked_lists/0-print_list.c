#include "lists.h"
#include <stdio.h>
/**
  *print_list - function to print a linked list
  *@h: pointer to a linked list
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
