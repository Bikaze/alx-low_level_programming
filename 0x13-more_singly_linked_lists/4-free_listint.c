#include "lists.h"
#include <stdlib.h>
/**
  *free_listint - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_listint(list_t *head)
{
	listint_t *ptr = head;
	listint_t *tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	head = NULL;
}
