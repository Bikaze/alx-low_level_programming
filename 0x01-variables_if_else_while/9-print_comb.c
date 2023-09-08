/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  *main - entry point of the program
  *Return: always return 0
  */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i + j > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + i);
			putchar('0' + j);
		}
	}
	return (0);
}
