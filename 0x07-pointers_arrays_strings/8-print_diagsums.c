#include <stdio.h>
/**
  *print_diagsums - program function to print an 8x8 grid
  *@a: will hold a square matrix of size "size"
  *@size: will hold size of square matrix
  *Return: will return nothing
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1, diag2);
}
