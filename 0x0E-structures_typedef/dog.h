#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Attributes
 * @name: Name of the dog 
 * @age: Age of the dog
 * @owner: owner of the dog
 *
 * Description: The attributes of a dog
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
