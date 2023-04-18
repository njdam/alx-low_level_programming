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
 * Description: a "struct dog" that changed to new type as new name "dog_t".
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
 /* dog_t - new type as new name for "struct dog"; */
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int strln(char *str);
char *cpstr(char *dest, char *src);

#endif /* DOG_H */
