#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function containing dog information;
 * @name: our First member;
 * @float: our Second member;
 * @owner:  our Third member;
 *
 * Description: a "struct dog" that changed struct dog "dog_t".
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for new dog struct dog;
 */
typedef struct dog dog_t;

#endif /* DOG_H */
