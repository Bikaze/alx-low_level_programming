#include "main.h"
/**
  *print_alphabet - program function
  *Return: will always return nothing
  */
void print_alphabet(void)
{
	for (int i = 0; i < 26; i++)
	{
		_putchar(97 + i);
	}
	_putchar('\n');
}
