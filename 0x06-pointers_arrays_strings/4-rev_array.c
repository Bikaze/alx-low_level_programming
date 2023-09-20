/**
  *reverse_array - program function
  *@a: will be holding the array to reverse
  *@n: will he holding the element count of the array 'a'
  *Return: will return nothing
  */
void reverse_array(int *a, int n)
{
	int *start = a;
	int temp;
	int *end = a + n - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
