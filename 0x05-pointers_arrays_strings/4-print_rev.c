#include "main.h"
/**
 *_strlen - program function
 *@s: will be holding a pointer to a string
 *Return: will return nothing
 */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

/**
  *print_rev - program function
  *@s: will be holding a pointer to a string
  *Return: will return nothing
  */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
