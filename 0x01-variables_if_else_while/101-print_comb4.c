/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  *main - entry point of the program
  *Return: always return 0
  */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j)
				{
					if (j < k)
					{
						if (i + j + k > 3)
						{
							putchar(',');
							putchar(' ');
						}
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
