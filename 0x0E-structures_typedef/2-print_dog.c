#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints all data of the dog
 * @d: dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	if (d->age >= 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
