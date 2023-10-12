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
	int i = 0;
	char *sep = "", *s;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}

