/**
  *_memset - program function to fill n bytes of s with b
  *@s: will be holding a pointer to a memory area
  *@b: will be holding constant character
  *@n: will hold the number times to enter the character b
  *Return: will return a pointer to a character
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
