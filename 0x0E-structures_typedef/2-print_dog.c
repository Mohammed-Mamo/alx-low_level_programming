#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - is function
 * @d: is dog name
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->age == NULL)
		d->age = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
