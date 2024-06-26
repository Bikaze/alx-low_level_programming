#include "search_algos.h"

/**
  *linear_search - This function searches for a value in an array of
  *integers using the Linear search algorithm
  *
  *@array: Pointer to the first element of the array
  *@size: Size of the array
  *@value: Value to search in the array
  *Return: Return first index where value is located otherwise -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
