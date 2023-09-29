#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry for the program
  *@argc: argument count
  *@argv: argument vector
  *Return: will return and integer
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
