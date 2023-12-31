#include <stdio.h>
#include <stdlib.h>

/**
  *main - program entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	code = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", code[i]);
			break;
		}
		printf("%02hhx ", code[i]);
	}
	return (0);
}
