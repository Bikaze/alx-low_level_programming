/**
  *_abs - program function to check absolute value
  *@n: will be holding a number to be checked
  *Return: will return absolute value of a number
  */
int _abs(int n)
{
	char message = n == 0 ? '0' : n > 0 ? '+' : '-';

	if (message == '0')
	{
		return (0);
	}
	else if (message == '+')
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
