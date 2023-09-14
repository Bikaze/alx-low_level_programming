#include "main.h"
/**
  *print_most_numbers - program function
  *Return: will always return nothing
  */
void print_most_numbers(void)
{
	char nbr = '0';

	while (nbr <= '9')
	{
		if (nbr == '2' || nbr == '4')
		{
			continue;
		}
		else
		{
			_putchar(nbr);
		}
		nbr++;
	}
	_putchar('\n');
}
