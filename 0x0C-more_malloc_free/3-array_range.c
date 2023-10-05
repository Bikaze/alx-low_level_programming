#include <stdlib.h>

/**
  *array_range - create array of a range of integers
  *@min: first element of the array
  *@max: last element of the array
  *Return: will return a pointer to an integer
  */
int *array_range(int min, int max)
{
	int *s, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}
