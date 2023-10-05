#include <stdlib.h>

/**
  *malloc_checked - allocate memory
  *@b: size of memory
  *Return: will return a pointer to void
  */
void *malloc_checked(unsigned int b)
{
	void *temp = (void *)malloc(sizeof(char) * b);

	if (temp == NULL)
	{
		exit(98);
	}
	else
	{
		return (temp);
	}
}
