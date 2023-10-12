#include <stdarg.h>
/**
  *sum_them_all - function to sum unknown number of integer arguments
  *@n: gives the number of anonymous variables
  *Return: an integer
  */
int sum_them_all(const unsigned int n, ...)
{
	var_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	var_start(ap, n);
	for (i = 0; i < n; i++)
		sum += var_args(ap, int);
	var_end(ap);
	return (sum);
}

