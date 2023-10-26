#include "main.h"
/**
  *flip_bits - find differing bits in two numbers
  *@n: input number
  *@m: input number
  *Return: number of differing bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	int count = 0;
	unsigned long int k = n ^ m;

	counter = sizeof(k) * 8;
	while (counter > 0)
	{
		if ((k & (1UL << (counter - 1))) >> (counter - 1))
			count++;
		counter--;
	}
	return (count);
}
