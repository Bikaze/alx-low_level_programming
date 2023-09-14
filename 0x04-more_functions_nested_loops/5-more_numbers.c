#include "main.h"
/**
  *more_numbers - program function
  *Return: will always return nothing
  */
void more_numbers(void)
{
	int j = 0;
	int i = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if ((j / 10) > 0)
			{
				_putchar(48 + (j / 10));
			}
			_putchar(48 + (j % 10));
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
