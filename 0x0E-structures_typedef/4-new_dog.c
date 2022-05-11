#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int x, pname, powner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (pname = 0; name[pname]; pname++)
		;

	for (powner = 0; owner[powner]; powner++)
		;

	n_dog->name = malloc(pname + 1);
	n_dog->owner = malloc(powner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (x = 0; x < pname; x++)
		n_dog->name[x] = name[x];
	n_dog->name[x] = '\0';

	n_dog->age = age;

	for (x = 0; x < powner; x++)
		n_dog->owner[x] = owner[x];
	n_dog->owner[x] = '\0';

	return (n_dog);
}
