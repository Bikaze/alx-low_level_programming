#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
  *main - program entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  */

int main(int argc, char **argv)
{
	char *operator = argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*f)(int, int);
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(operator);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = f(num1, num2);
	printf("%d\n", i);
	return (0);
}
