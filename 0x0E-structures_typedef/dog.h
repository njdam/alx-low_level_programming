#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - function containing dog information;
 * @name: our First member;
 * @age: our Second member;
 * @owner:  our Third member;
 *
 * Description: a "struct dog" that changed struct dog "my_dog".
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
 /* my_dog - typedef for new dog struct dog; */
my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
