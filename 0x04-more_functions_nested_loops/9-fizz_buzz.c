#include "main.h"

/**
  *fiz - helper function
  *@n: signal for fizz, buzz, or fizzBuzz
  */

void fiz(int n)
{
	int i = 0;
	char word[] = "FizzBuzz";

	if (n == 1)
	{
		n = 8;
		i = 4;
	}
	for (i = i; i < n; i++)
	{
		_putchar(word[i]);
	}
}

/**
  *main - program entry point
  *Return: will always return 0
  */

int main(void)
{
	int i = 0;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			fiz(8);
			_putchar(' ');
		}
		else if (i % 3 == 0)
		{
			fiz(4);
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			fiz(1);
			_putchar(' ');
		}
		else
		{
			if (i / 10 > 0)
			{
				_putchar(48 + i / 10);
			}
			_putchar(48 + i % 10);
			_putchar(' ');
		}
	}
	fiz(1);
	_putchar('\n');
	return (0);
}
