#include "main.h"
/**
  *print_alphabet - program function
  *Return: will always return nothing
  */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
