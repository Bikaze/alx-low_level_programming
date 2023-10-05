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
  *string_nconcat - join two strings
  *@s1: string 1
  *@s2: string 2
  *@n: n bytes of s2 to contatenate
  *Return: will return a pointer to a character
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if ((int)n >= len(s2))
	{
		n = len(s2);
	}
	k = len(s1) + n;
	s = (char *)malloc(sizeof(char) * (k + 1));
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
	while (j < k)
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	return (s);
}
