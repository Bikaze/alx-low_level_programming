/**
  *_isupper - program function
  *@c: will be holding a character to be turned into an int
  *Return: will return 1 if uppercase and 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}