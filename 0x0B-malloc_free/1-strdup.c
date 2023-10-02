#include <stdlib.h>

/**
  *_strdup - create array of size
  *@str: string to put in the array
  *Return: will return a pointer to a character
  */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	s = (void *)malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
