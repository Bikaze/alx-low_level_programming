#include "main.h"
/**
  *print_diagonal - program function
  *@n: number of times to print '\'
  *Return: will always return nothing
  */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i <= n && n > 0)
	{
		j = 0;
		while (j < i-1)
		{
			_putchar(' ');
			j++;
		}
		if (i != 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
