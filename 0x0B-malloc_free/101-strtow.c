#include <stdlib.h>
char **alloc(int, int []);
/**
  *count - count the number of characters
  *@p: pointer to a character
  *Return: integer
  */
int count(char *p)
{
	int i = 0;

	while (p[i] != '\t' && p[i] != ' ' && p[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *strtow - turn a string in an array of words
  *@str: string argument
  *Return: will return an array of words
  */
char **strtow(char *str)
{
	char **s;
	int i = 0, j = 0, k = 0;
	int wlength[20];
	char *p[20];

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			i++;
		}
		else
		{
			p[j] = &str[i];
			wlength[j] = count(&str[i]) + 1;
			i += wlength[j] - 1;
			j++;
		}
	}
	i = 0;
	s = alloc(j, wlength);
	while (i < j)
	{
		k = 0;
		while (k < wlength[i] - 1)
		{
			s[i][k] = p[i][k];
			k++;
		}
		s[i][k] = '\0';
		i++;
	}
	return (s);
}
/**
  *alloc - allocate memory dynamically
  *@j: number of words
  *@wlength: number of characters in a word
  *Return: return a pointer to a pointer to a char
  */
char **alloc(int j, int wlength[])
{
	char **s;
	int i = 0, k = 0;

	if (j == 0)
	{
		return (NULL);
	}

	s = (char **) malloc((j + 1) * sizeof(char *));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		s[i] = (char *) malloc(sizeof(char) * wlength[i]);
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}
		i++;
	}
	return (s);
}
