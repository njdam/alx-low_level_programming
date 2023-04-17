#include "dog.h"

/**
 * init_dog - function to initialize a variable of type "struct dog";
 * @d: pointing to struct dog to be initialized;
 * @name: first member is to be initialised;
 * @age: second member is to be initialised;
 * @owner: third member is to be initialised;
 *
 * Return: value is nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
