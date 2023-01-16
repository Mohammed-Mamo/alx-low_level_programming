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
	if (d != NULL)
	{
	if ((d->name == NULL && d->age == NULL) && d->owner == NULL)
		printf("(nil)");

	else if (d->name == NULL)
		printf("Name: (nil)Name: (nil)");
	else 
		printf("Name:%s\n", d->name);
	}
}
