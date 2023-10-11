#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *get_op_func - take a string
  *@s: string
  *Return: a pointer to a function
  */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		char *p = ops[i].op;

		if (strcmp(p, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
