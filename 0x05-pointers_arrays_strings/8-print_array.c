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

	if (n >= 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		if (i > 0)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
