#include "main.h"
/**
  *print_alphabet_x10 - program function
  *Return: will always return nothing
  */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
