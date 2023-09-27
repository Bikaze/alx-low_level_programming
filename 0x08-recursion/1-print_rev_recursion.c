#include "main.h"

/**
  *_print_rev_recursion - prints a string in reverse using recursion
  *@s: holds a pointer to the first character of a string
  *Return: will return nothing
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
