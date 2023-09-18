/**
  *swap_int - program function
  *@a: will be holding a pointer to the first integer
  *@b: will be holding a pointer to the second integer
  *Return: will return nothing
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
