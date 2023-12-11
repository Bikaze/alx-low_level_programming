/**
  *check - program function to find character c in string s
  *@s: will be holding a pointer to a string
  *@c: will hold a character
  *Return: will return an integer
  */
int check(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
  *_strpbrk - finds the first character from "accept" in string "s"
  *@s: will be holding a pointer to a string
  *@accept: will hold a pointer to a string
  *Return: will return a pointer to a character
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *p = 0;

	while (s[i] != '\0')
	{
		if (check(accept, s[i]))
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (p);
}
