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

int main(int __attribute__((__unused__))argc, char *argv[])
{
	char *operator;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
