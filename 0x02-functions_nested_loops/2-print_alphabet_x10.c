#include "main.h"
/**
  *print_alphabet - program function
  *Return: will always return nothing
  */
void print_alphabet(void)
{
	char letter;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
