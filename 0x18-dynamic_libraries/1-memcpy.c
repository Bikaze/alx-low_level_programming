/**
  *_memcpy - program function to fill n bytes of dest with *(src)
  *@dest: will be holding a pointer to a memory area
  *@src: will be holding a pointer to another memory area
  *@n: will hold the number characters to copy from src to dest
  *Return: will return a pointer to a character
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
