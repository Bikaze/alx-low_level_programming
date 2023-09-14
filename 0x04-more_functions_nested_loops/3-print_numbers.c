#include "main.h"
/**
  *print_numbers - program function
  *Return: will always return nothing
  */
void print_numbers(void)
{
	char nbr = '0';

	while (nbr <= '9')
	{
		_putchar(nbr);
		nbr++;
	}
	_putchar('\n');
}
