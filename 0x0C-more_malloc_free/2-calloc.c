#include <stdlib.h>
#include "main.h"

/**
  *_memset - program function to fill n bytes of s with b
  *@s: will be holding a pointer to a memory area
  *@b: will be holding constant character
  *@n: will hold the number times to enter the character b
  *Return: will return a pointer to a character
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
  *_calloc - allocate memory
  *@nmemb: number of members
  *@size: size of memory for each member
  *Return: will return a pointer to void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	temp = malloc(size * nmemb);
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(temp, 0, size * nmemb);
	}
	return (temp);

}
