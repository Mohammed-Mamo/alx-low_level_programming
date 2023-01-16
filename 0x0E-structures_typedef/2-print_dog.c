#include <stdio.h>
#include "dog.h"
/**
 * print_dog - is function
 * @d: is dog name
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %0.6fowner: %s\n", d->name, d->age, d->owner);
}
