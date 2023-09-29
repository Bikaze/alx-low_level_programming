#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
  *check - helper function
  *@sum: takes the value entered
  *Return: integer
  */
int check(int sum)
{
	int i = 0;

	while (sum > 0)
	{
		if (sum >= 25)
		{
			sum -= 25;
			i++;
		}
		else if (sum >= 10)
		{
			sum -= 10;
			i++;
		}
		else if (sum >= 5)
		{
			sum -= 5;
			i++;
		}
		else if (sum >= 2)
		{
			sum -= 2;
			i++;
		}
		else if (sum >= 1)
		{
			sum -= 1;
			i++;
		}
	}
	return (i);
}


/**
  *main - entry for the program
  *@argc: argument count
  *@argv: argument vector
  *Return: will return and integer
  */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	sum = atoi(argv[1]);
	i = check(sum);
	printf("%d\n", i);
	return (0);
}
