#include <stdlib.h>

/**
  *len - helper function
  *@p: pointer to char
  *Return: integer
  */
int len(char p[])
{
	int i = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *str_concata - join two strings
  *@s1: string 1
  *@s2: string 2
  *Return: will return a pointer to a character
  */
char *str_concata(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\n';
	i++;
	return (&s1[i]);
}
/**
  *argstostr - changes arguments to a string
  *@ac: argument count
  *@av: argument vector
  *Return: pointer to a character
  */
char *argstostr(int ac, char **av)
{
	int i = 0, length = 0;
	char *s, *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		length += len(av[i]);
		i++;
	}
	s = (char *)malloc(sizeof(char) * (length + ac + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	p = s;
	while (i < ac)
	{
		p = str_concata(p, av[i]);
		i++;
	}
	return (s);
}
