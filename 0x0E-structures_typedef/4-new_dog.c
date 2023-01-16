#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - is function
 * @name: Dogs name
 * @age: Dogs age
 * @owner: owners of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	char *cpyn, *cpyo;
	int len1 = 0, len2 = 0, i;
	len1 = strlen(name);
	len2 = strlen(owner);

	cpyn = malloc(len1 + 1);

	if (cpyn == NULL)
		return (NULL);

	cpyo = malloc(len2 + 1);
	if (cpyo == NULL)
		return (NULL);

	dog_t *newd;

	newd->name = malloc(len1 + 1);
	newd->owner = malloc(len2 + 1);
	newd->age = malloc(sizeof(float));

	if (newd == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		cpyn[i] = name[i];
	cpyn[i] = '\0';
	for (i = 0; owner[i]; i++)
		cpyo[i] = owner[i];
	cpyo[i] = '\0';
	newd->age = age;
	newd->owner = owner;
	newd->name = name;
	return (newd);
}
