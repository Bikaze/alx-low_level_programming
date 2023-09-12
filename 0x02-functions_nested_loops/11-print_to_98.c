#include "main.h"
/**
  *printer - helper function
  *@n: will be holding number to print to the standard output
  */
void printer(int  n)
{
	if ((n / 100) > 0)
	{
		_putchar(n / 100 + '0');
	}
	if ((n / 10) > 0)
	{
		_putchar((n / 10) % 10 + '0');
	}
	_putchar(n % 10 + '0');
}

/**
  *print_to_98 - program function to input number up to 98
  *@n: will be holding a number to start with
  */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printer(i);
			_putchar(',');
			_putchar(' ');
		}
		printer(98);
		_putchar('\n');
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			if (n < 0)
			{
				_putchar('-');
				printer(-1 * i);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				printer(i);
				_putchar(',');
				_putchar(' ');
			}
		}
		printer(98);
		_putchar('\n');
	}
}
