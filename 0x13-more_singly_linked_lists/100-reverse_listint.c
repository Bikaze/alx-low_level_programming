#include "lists.h"
#include <stdlib.h>
/**
  *reverse_listint - reverse a list
  *@head: pointer to a pointer to the start of the list
  *Return: pointer to a new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex;
	listint_t *tmp = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		nex = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = nex;
	}
	*head = tmp;
	return (tmp);
}
