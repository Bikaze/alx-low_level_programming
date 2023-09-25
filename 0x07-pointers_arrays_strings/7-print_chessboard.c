#include "main.h"
/**
  *print_chessboard - program function to print an 8x8 grid
  *@a: will hold an 8x8 2D character array
  *Return: will return nothing
  */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
