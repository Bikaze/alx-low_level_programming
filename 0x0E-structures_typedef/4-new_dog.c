#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  *new_dog - print struct dog instance
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *Return: pointer to dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * strlen(name));
	if (d->name == NULL)
	{
		free (d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(sizeof(char) * strlen(owner));
	if (d->owner == NULL)
	{
		free (d);
		return (NULL);
	}
	strcpy(d->owner, name);

	return (d);
}
