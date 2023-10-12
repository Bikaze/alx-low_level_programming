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
	char *sep = "", *fmt = (char *) format, *s;

	va_start(ap, format);
	if (format)
	{
		while (*fmt)
		{
			switch (*(fmt++))
			{
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
					{
						printf("%s(nil)", sep);
						break;
					}
					printf("%s%s", sep, s);
					break;
				case 'c':
					c = (char) va_arg(ap, int);
					printf("%s%c", sep, c);
					break;
				case 'i':
					i = va_arg(ap, int);
					printf("%s%d", sep, i);
					break;
				case 'f':
					f = (float) va_arg(ap, double);
					printf("%s%f", sep, f);
					break;
			}
			sep = ", ";
		}
	}
	va_end(ap);
	printf("\n");
}

