#include <stdlib.h>

/**
  *create_array - create array of size "size" and  put char "c" in it
  *@size: size of the array
  *@c: character to put in the array
  *Return: will return a pointer to a character
  */
char *create_array(unsigned int size, char c)
{
	char *s = (void *)malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
