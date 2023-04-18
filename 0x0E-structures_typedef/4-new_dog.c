#include "dog.h"

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

	nln = strln(name);
	oln = strln(owner);

	my_dog->name = malloc((nln + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	cpstr(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc((oln + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	cpstr(my_dog->owner, owner);

	return (my_dog);
}

/**
 * strln - function to return length of string;
 * @str: is string to be used;
 *
 * Return: resulting length of string.
 */
int strln(char *str)
{
	int ln;

	ln = 0;
	while (str[ln] != '\0')
		ln++;

	return (ln);
}

/**
 * cpstr - my fuction to copy string to dest;
 * @src: is source of string to be copied;
 * @dest: is where string is to be copied to;
 *
 * Return: resulting string in dest.
 */
char *cpstr(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
