/**
  *check - a helper function
  *@c: character to be checked
  *Return: will return an integer
  */
int check(char c)
{
	int i = 0;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'};
	while (i < 13)
	{
		if (c == arr[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
  *cap_string - program function
  *@a: will be holding the array to transform
  *Return: will return a pointer to a character
  */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122 && check(a[i - 1]))
		{
			a[i] -= 32;
		}
		if (a[i] == '\t')
		{
			a[i] = ' ';
		}
		i++;
	}
	return (a);
}
