#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free struct dog instance
  *@d: pointer to a dog_t instance
  *Return: nothing
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{}
	free(d->name);
	free(d->owner);
	free(d);
}
