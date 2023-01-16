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
		printf("Name:(nill)\n");
	printf("Name:%s\n", d->name);

	if(d->age == NULL)
		printf("Age:(nill)\n");
	printf("Age:%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner:(nil)");
       printf("Owner:%s\n", d->owner);
}
