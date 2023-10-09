#include <stdlib.h>
#include "dog.h"
/**
  *_strlen - program function
  *@s: will be holding a pointer to a string
  *Return: will return nothing
  */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

/**
  *_strcpy - program function
  *@dest: will be holding an array
  *@src: will be holding the number of elements in the array
  *Return: will return a pointer to a character
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


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

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, name);

	return (d);
}
