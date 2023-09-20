/**
  *_strncat - program function
  *@dest: will be holding the first string
  *@src: will be holding the second string
  *@n: will be holding the number of characters to concatenate
  *Return: will return a pointer to a character of 'dest' string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
