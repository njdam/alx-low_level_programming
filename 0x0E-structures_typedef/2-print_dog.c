#include "dog.h"

/**
 * print_dog -function to prints a "struct dog";
 * @d: pointer pointing to "struct dog";
 *
 * Return: value is nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
