#include "main.h"
/**
  *_sqrt0_recursion - helper function
  *@n: holds an integer(base)
  *@i: holds an integer(guess)
  *Return: will return an integer
  */

int _sqrt0_recursion(int n, int i)
{
	if (i * i  == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt0_recursion(n, i + 1));
	}
}

/**
  *_sqrt_recursion - returns the square root of n
  *@k: will hold an integer
  *Return: will return an integer
  */

int _sqrt_recursion(int k)
{
	if (k < 0)
	{
		return (-1);
	}
	return (_sqrt0_recursion(k, 1));
}
