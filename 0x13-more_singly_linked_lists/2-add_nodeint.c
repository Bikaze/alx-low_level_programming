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
	listint_t *ptr;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *(head);
	*(head) = ptr;
	return (ptr);
}
