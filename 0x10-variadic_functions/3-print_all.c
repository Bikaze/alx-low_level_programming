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
<<<<<<< HEAD
	char *sep = "", *fmt = (char *) format, *s;
=======
	char *sep = ", ";
	char *fmt = (char *) format;
>>>>>>> parent of 5a475af (change)

	va_start(ap, format);
	/*if (format)
	{*/
		while (*fmt)
		{
<<<<<<< HEAD
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
=======
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)%s", sep);
				}
				else
				{
					printf("%s%s", s, sep);
				}
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
>>>>>>> parent of 5a475af (change)
		}
	/*}*/
	va_end(ap);
	printf("\n");
}

