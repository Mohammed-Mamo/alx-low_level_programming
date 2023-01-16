#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable
 * @d: is dog type
 * @name: dog name
 * @age: Dog's age
 * @owner: dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
