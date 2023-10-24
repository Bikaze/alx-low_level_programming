#include "lists.h"
#include <stdlib.h>
/**
  *pop_listint - freeing a list
  *@head: pointer to the start of the list
  *Return: removed integer
  */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	ptr = *head;

	tmp = ptr->next;
	free(ptr);
	*ptr = tmp;
}
