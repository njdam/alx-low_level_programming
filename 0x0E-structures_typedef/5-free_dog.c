#include "dog.h"

/**
 * free_dog - a function to free allocated "dogs" memory;
 * @d: pointing to struct dog to be free;
 *
 * Return: value is nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
