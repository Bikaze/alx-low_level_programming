#include "main.h"
/**
 *_strlen - program function
 *@s: will be holding a pointer to a string
 *Return: will return nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *rev_string - program function
  *@s: will be holding a pointer to a string
  *Return: will return nothing
  */
void rev_string(char *s)
{
	char temp;
	char *start = s;
	char *end = s + _strlen(s) - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
