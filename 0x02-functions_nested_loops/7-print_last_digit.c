#include "main.h"
/**
  *print_last_digit - program function to give last digit of a number
  *@n: will be holding a number to be checked
  *Return: will return the last digit of a number
  */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
