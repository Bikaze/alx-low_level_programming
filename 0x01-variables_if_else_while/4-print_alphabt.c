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
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
