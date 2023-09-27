/**
  *prime - helper function
  *@n: holds an integer(the one to check)
  *@i: holds an integer(guess)
  *Return: will return an integer(1 or 0)
  */

int prime(int n, int i)
{
	if (n % i  == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}

/**
  *is_prime_number - finds out if k is prime
  *@k: will hold an integer
  *Return: will return an integer(1 or 0)
  */

int is_prime_number(int k)
{
	if (k < 2)
	{
		return (0);
	}
	return (prime(k, 2));
}
