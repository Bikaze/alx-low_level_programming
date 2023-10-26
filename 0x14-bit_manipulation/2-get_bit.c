#include "main.h"
/**
  *get_bit - return bit value at given index of a number
  *@n: input number
  *@index: index at which to get the value
  *Return: value at index (as integer)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if ((n & (1UL << (index))) >> (index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

