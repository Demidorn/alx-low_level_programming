#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints all data of the dog
 * @d: dog struct
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
