#include <stdio.h>
#include <stdarg.h>
/**
  *print_all - function to print unknown number of arguments
  *@format: string which gives the format of input arguments
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	char c;
	int i;
	float f;

	va_start(ap, format);
	while (*format++)
	{
		switch (*format)
		{
			case 's':
				s = va_arg(ap, char *);
				if (var == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f", f);
				break;
		}
		if (*(format + 1) != '\0')
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}

