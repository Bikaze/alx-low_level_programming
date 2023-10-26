/**
  *get_endianness - get the endianness of the computer
  *Return: 1 if little endian or 0 if big endian
  */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
