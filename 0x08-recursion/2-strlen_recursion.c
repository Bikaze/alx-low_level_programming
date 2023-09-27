#include "main.h"
/**
  *_strlen_recursion - prints a string using recursion
  *@s: holds a pointer to the first character of a string
  *Return: will return an integer
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		
		i = 1 + _strlen_recursion(s + 1);
		
		return (i);
	}
}
