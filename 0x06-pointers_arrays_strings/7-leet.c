/**
  *leet - program function
  *@a: will be holding the array to transform
  *Return: will return a pointer to a character
  */
char *leet(char *a)
{
	char mapping[256];
	int i = 0;

	mapping['a'] = mapping['A'] = '4';
	mapping['e'] = mapping['E'] = '3';
	mapping['o'] = mapping['O'] = '0';
	mapping['t'] = mapping['T'] = '7';
	mapping['l'] = mapping['L'] = '1';

	while (a[i] != '\0')
	{
		if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' ||
				a[i] == 'o' || a[i] == 'O' || a[i] == 't' || a[i] == 'T' ||
				a[i] == 'l' || a[i] == 'L')
		{
			a[i] = mapping[a[i] - '\0'];
		}
		i++;
	}
	return (a);
}
