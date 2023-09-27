#include "main.h"
/**
  *_pow_recursion - returns the x to the power y
  *@x: holds an integer(base)
  *@y: holds an integer(exponent)
  *Return: will return an integer
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
