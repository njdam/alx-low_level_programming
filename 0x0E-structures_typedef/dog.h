#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function containing dog information;
 * my_dog - typedef for new dog struct dog;
 * @name: our First member;
 * @float: our Second member;
 * @owner:  our Third member;
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
my_dog;

#endif /* DOG_H */
