#include <stdio.h>
/**
  *binary_to_uint - changes binary number to a unsigned integer
  *@b: string of zeros and ones
  *Return: unsigned integer
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int mul = 1;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		sum += (b[i] - '0') * mul;
		mul *= 2;
		i--;
	}
	return (sum);
}
