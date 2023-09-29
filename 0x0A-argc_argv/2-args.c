#include <stdio.h>
/**
  *main - entry for the program
  *@argc: argument count
  *@argv: argument vector
  *Return: will return and integer
  */

int main(int argc, char *argv[])
{
	int i = 0;
	
	for(int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
