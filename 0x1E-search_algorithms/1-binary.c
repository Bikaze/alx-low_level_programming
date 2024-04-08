#include "search_algos.h"

/**
  *binary_search - This function searches for a value in a sorted array of
  *integers using the Binary search algorithm
  *
  *@array: Pointer to the first element of the array to search in
  *@size: size of the array
  *@value: value to search for in the array
  *Return: Return first index where value is located otherwise -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int mid, offset, ret;

	if (!array || size <= 0)
		return (-1);

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(",");
		printf(" %d", array[i]);
	}
	printf("\n");

	mid = (size - 1) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	offset = mid + 1;
	ret = binary_search(array + offset, size - offset, value);
	if (ret != -1)
		return (ret + offset);
	return (ret);
}
