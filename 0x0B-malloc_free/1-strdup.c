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

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i + 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
