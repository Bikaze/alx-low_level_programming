/**
  *string_toupper - program function
  *@a: will be holding the array to transform
  *Return: will return a pointer to a character
  */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
