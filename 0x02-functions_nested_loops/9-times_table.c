#include "main.h"
/**
  *times_table - program function to give times table
  */
void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if ((i * j) > 9)
			{
				_putchar((i * j) / 10 + '0');
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
		_putchar((i * j) % 10 + '0');
		_putchar('\n');
		i++;
	}
}
