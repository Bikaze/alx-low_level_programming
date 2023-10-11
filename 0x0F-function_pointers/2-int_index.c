#include <stdlib.h>
/**
  *int_index - search for an integer
  *@array: pointer to an array
  *@size: size of the array
  *@action: function to execute on each element of the array
  *Return: nothing
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for(i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
