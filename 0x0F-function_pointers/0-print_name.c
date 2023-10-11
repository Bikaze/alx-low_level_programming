#include <stdlib.h>
/**
  *print_name - print the name of a person
  *@name: name of the person
  *@f: pointer to a function that prints the name
  *Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
