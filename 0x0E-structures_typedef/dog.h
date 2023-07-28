#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that creates a dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: first struct with alx
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 *
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
