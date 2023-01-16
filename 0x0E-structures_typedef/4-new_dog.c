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
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	char *cpyName, *cpyOwner;
	int l1 = 0, l2 = 0, i = 0;
	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	cpyName = malloc(l1 + 1);
	cpyOwner = malloc(l2 + 1);
	if (cpyName == NULL || cpyOwner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyOwner[i] = owner[i];
	cpyOwner[i] ='\0';
	for (i = 0; name[i]; i++)
		cpyName[i] = name[i];
	cpyName[i] = '\0';
	nd->name = cpyName;
	nd->age = age;
	nd->owner = cpyOwner;
	return (nd);
}
