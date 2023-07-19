#include"dog.h"
#include <stdlib.h>
#include "main.h"

/**
 * init_dog - new struct dog initialized
 * @d: pointer to struct of new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
	}
}
