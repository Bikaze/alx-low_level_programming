#include "lists.h"
#include <stdlib.h>
/**
  *free_list - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
