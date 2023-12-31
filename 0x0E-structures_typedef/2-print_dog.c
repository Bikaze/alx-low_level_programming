#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "dog.h"
/**
  *print_dog - print struct dog instance
  *@d: pointer to a dog instance
  *Return: nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (isnan(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
