/**
  *check - program function to find string s in string c
  *@s: will be holding a pointer to a string
  *@c: will hold a pointer to a character
  *Return: will return an integer
  */
int check(char *s, char *c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c[i] || c[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
  *_strstr - finds the string needle in string haystack
  *@haystack: will be holding a pointer to a string
  *@needle: will hold a pointer to a string
  *Return: will return a pointer to a character
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (haystack == 0 || needle == 0)
	{
		return (0);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (check(needle, &haystack[i]))
			{
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
