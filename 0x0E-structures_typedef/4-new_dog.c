#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dog_t new_dog - is function
 * @name: name of the dog
 * @age: age of the new dog
 * @owner: the dog owner
 * Return: a pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
