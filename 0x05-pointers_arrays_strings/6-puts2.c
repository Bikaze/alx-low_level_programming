#include "main.h"
/**
  *puts2 - program function
  *@str: will be holding a pointer to a string
  *Return: will return nothing
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
