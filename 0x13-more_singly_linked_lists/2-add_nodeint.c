#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint - adding a node at the front
  *@head: pointer to the start of the list
  *@n: a number with which to form a new node
  *Return: count of the nodes
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *ptr;

	ptr = (list_t *) malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = strdup(str);
	ptr->next = *(head);
	*(head) = ptr;
	return (ptr);
}
