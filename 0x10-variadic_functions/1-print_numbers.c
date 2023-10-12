#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - function to print unknown number of integer arguments
  *@n: gives the number of anonymous variables
  *@separator: string to print after each iteration
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int var;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		var = va_arg(ap, int);
		printf("%d", var);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

