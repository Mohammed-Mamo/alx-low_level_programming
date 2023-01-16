#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - is object dog
 * @name: name of the dog
 * @owner: owner name
 * @age: age of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
