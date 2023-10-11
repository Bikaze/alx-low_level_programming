#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  *main - program entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  */

int main(int argc, char **argv)
{
	int (*f)(int, int);
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}
