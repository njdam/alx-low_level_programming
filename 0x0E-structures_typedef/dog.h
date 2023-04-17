#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function containing dog information;
 * @name: our First member;
 * @float: our Second member;
 * @owner:  our Third member;
 *
 * Description: a "struct dog" that changed struct dog "my_dog".
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - typedef for new dog struct dog;
 */
typedef struct dog my_dog;

#endif /* DOG_H */
