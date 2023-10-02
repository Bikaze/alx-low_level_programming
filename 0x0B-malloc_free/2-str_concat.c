#include <stdlib.h>
/**
  *len - helper function
  *@p: pointer to char
  *Return: integer
  */
int len(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *str_concat - join two strings
  *@s1: string 1
  *@s2: string 2
  *Return: will return a pointer to a character
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	k = len(s1) + len(s2);

	s = (char *)malloc(sizeof(char) * (k));
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		s[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	return (s);
}
