#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add_node - adding a node at the front
  *@head: pointer to the start of the list
  *@str: a string to with which to form a new node
  *Return: count of the nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (list_t *) malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *(head);
	*(head) = ptr;
	return (ptr);
}
