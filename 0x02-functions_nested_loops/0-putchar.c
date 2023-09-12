#include <stdio.h>
/**
  *main - program entry point
  *Return: will always return 0
  */
int main(void)
{
	char string[] = "_putchar";

	for (int i = 0; i < sizeof(string) / sizeof(string[0]); i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
