#ifndef _H
#define _H
/**
  *struct dog - dog description
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *Description: simple description of a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
