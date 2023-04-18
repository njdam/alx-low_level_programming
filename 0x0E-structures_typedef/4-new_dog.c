#include "dog.h"
#include <string.h>

/**
 * new_dog - a function to create new dog;
 * @name: first member as name of a dog;
 * @age: second member as age of a dog;
 * @owner: third member as owner of a dog;
 *
 * Return: a pointer to new dog otherwise "NULL".
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nln, oln;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	nln = strlen(name);
	oln = strlen(owner);

	my_dog->name = malloc((nln + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	my_dog->owner = malloc((oln + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);

	return (my_dog);
}
