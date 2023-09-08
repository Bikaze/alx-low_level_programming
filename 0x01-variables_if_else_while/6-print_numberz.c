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
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
	}
	putchar('\n');
	return (0);
}
