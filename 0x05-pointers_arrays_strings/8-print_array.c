#include <stdio.h>
/**
  *print_array - program function
  *@a: will be holding an array
  *@n: will be holding the number of elements in the array
  *Return: will return nothing
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
