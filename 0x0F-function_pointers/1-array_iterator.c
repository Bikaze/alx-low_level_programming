#include <stdlib.h>
/**
  *array_iterator - execute action on each element of array
  *@array: pointer to an array
  *@size: size of the array
  *@action: function to execute on each element of the array
  *Return: nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size_t == 0 || action == NULL)
		return;
	size_t i = 0;
	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
