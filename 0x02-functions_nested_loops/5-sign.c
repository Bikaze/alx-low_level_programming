/**
  *print_sign - program function
  *@n: will be holding a number to be checked
  *Return: will return 1 if lowercase and 0 otherwise
  */
int print_sign(int n)
{
	char message = n == 0 ? '0' : n > 0 ? '+' : '-';

	if (message == '0')
	{
		return (0);
	}
	else if (message == '+')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
