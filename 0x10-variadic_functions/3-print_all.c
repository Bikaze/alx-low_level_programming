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
	char c;
	int i;
	float f;
	char *sep = ", ", *fmt = (char *) format, *s;

	va_start(ap, format);
	while (*fmt && format != NULL)
	{
		if (*(fmt + 1) == '\0')
			sep = "";
		switch (*(fmt++))
		{
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", s, sep);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c%s", c, sep);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f%s", f, sep);
				break;
		}
	}
	va_end(ap);
	printf("\n");
}

