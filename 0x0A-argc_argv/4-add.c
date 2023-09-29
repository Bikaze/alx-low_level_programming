#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
  *check - helper function
  *@s: string
  *Return: integer
  */
bool check(char *s)
{
	char *endptr;

	strtol(s, &endptr, 10);

	return (*endptr == '\0');
}

/**
  *main - entry for the program
  *@argc: argument count
  *@argv: argument vector
  *Return: will return and integer
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
