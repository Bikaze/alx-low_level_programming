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
	char hexadec[] = "0123456789ABCDEF";

	for (i = 0; i < 15; i++)
	{
		putchar(hexadec[i]);
	}
	putchar('\n');
	return (0);
}
