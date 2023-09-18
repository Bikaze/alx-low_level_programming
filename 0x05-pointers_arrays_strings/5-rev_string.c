#include "main.h"
/**
 *_strlen - program function
 *@s: will be holding a pointer to a string
 *Return: will return nothing
 */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

/**
  *rev_string - program function
  *@s: will be holding a pointer to a string
  *Return: will return nothing
  */
void rev_string(char *s)
{
	char m[50];
	int i = _strlen(s) - 1;
	int j = 0;

	while (i >= 0)
	{
		m[j] = s[i];
		i--;
		j++;
	}
	i++;
	while (i < _strlen(s))
	{
		s[i] = m[i];
		i++;
	}
}
