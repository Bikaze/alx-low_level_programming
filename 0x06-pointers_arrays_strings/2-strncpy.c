/**
  *_strncpy - program function
  *@dest: will be holding the buffer to hold the first string
  *@src: will be holding the second string
  *@n: will be holding the number of characters to copy
  *Return: will return a pointer to a character of 'dest' string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
