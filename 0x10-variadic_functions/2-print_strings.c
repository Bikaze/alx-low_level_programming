#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - function to print unknown number of string arguments
  *@n: gives the number of anonymous variables
  *@separator: string to print after each iteration
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *var;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		var = va_arg(ap, char *);
		if (var == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", var);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

