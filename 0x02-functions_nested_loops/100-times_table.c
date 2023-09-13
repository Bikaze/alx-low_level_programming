#include "main.h"
/**
  *print_times_table - program function to give times table
  *@n: dimension of the table
  */
void print_times_table(int n)
{
	int i = 0;
	int j;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if ((i * j) > 9)
			{
				_putchar((i * j) / 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
			}
			_putchar((i * j) % 10 + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		if ((i * j) > 9)
		{
			_putchar((i * j) / 10 + '0');
		}
		else
		{
			_putchar(' ');
		}
		_putchar((i * j) % 10 + '0');
		_putchar('\n');
		i++;
	}
}
