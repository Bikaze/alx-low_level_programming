#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add_node_end - adding a node at the end
  *@head: pointer to the start of the list
  *@str: a string to with which to form a new node
  *Return: pointer to a node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *tmp;

	if (str == NULL)
		return (NULL);
	ptr = (list_t *) malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
		*(head) = ptr;
	else
	{
		tmp = *(head);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (ptr);
}
