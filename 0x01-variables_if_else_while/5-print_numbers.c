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
	char alphabet[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
