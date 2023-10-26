#include "main.h"
/**
  *print_binary - convert binary representation of a number
  *@n: input number
  *Return: nothing
  */
void print_binary(unsigned long int n)
{
	int counter;
	int k = 0;

	if (n == 0)
		_putchar('0');

	counter = sizeof(n) * 8;
	while (counter > 0)
	{
		if ((n & (1UL << (counter - 1))) >> (counter - 1))
		{
			k = 1;
			_putchar('1');
		}
		else if (k)
		{
			_putchar('0');
		}
		counter--;
	}
}
