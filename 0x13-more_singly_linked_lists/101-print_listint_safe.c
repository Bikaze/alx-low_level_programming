#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int found(const listint_t *arr[], const listint_t *p);
/**
  *print_listint_safe - print all elements of a list(structure)
  *@head: a pointer to a listint_t list
  *Return: count of printed elements
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *arr[1024];

	if (head)
	{
		while (head && !found(arr, head))
		{
			arr[i] = head;
			printf("[%p] %d\n",(void *)head, head->n);
			head = head->next;
			i++;
		}
	}
	else
		exit(98);
	if (head)
		printf("-> [%p] %d\n",(void *)head, head->n);

	return (i);
}

/**
  *found - look for already printed addresses
  *@p: listint_t pointer
  *@arr: array of listint_t pointers
  *@Return: 0 or 1 (i.e false or true)
  */

int found(const listint_t *arr[], const listint_t *p)
{
	int i = 0;
	
	while (arr[i])
	{
		if (arr[i] == p)
			return (1);
		i++;
	}
	return (0);
}
