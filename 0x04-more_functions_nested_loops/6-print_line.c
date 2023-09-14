#include "main.h"
/**
  *print_line - program function
  *@n: number of times to print '_'
  *Return: will always return nothing
  */
void print_line(int n)
{
	int i = 0;

	while (i <= n && n >= 0)
	{
		if(i != 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
