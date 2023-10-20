#include "lists.h"
#include <stdlib.h>
/**
  *free_list - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
