/**
  *_strchr - program function to find character c in string s
  *@s: will be holding a pointer to a string
  *@c: will hold a character
  *Return: will return a pointer to a character
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (0);
}
