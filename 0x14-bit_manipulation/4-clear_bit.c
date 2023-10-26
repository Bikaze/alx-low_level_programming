#include "main.h"
/**
  *clear_bit - set bit value at given index of a number to 0
  *@n: input number
  *@index: index at which to get the value
  *Return: 1 if it worked or -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n & ((0UL << index) | (1UL << index));
	return (1);
}

