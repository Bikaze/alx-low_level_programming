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
  *_strspn - finds character from "accept" in beginning of string "s"
  *@s: will be holding a pointer to a string
  *@accept: will hold a pointer to a string
  *Return: will return a pointer to a character
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (check(accept, s[i]) && s[i] != '\0')
	{
		i++;
	}
	return (i);
}
