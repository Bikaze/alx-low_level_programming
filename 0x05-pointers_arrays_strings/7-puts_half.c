#include "main.h"

/**
  *_strlen - helper function
  *@s: hold a pointer to a character
  *Return: will return an integer
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *puts_half - program function
  *@str: will be holding a pointer to a string
  *Return: will return nothing
  */
void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
	{
		i = _strlen(str) / 2;
	}
	else
	{
		i = _strlen(str) / 2 + 1;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
