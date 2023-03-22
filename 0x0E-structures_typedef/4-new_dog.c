#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog struct and initialize its fields
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog struct, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int name_len, owner_len;

	/* allocate memory for the dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* copy the name string */
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	new_dog->name = malloc(sizeof(char) * (name_len + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		new_dog->name[name_len] = name[name_len];
	new_dog->name[name_len] = '\0';

	/* copy the owner string */
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		new_dog->owner[owner_len] = owner[owner_len];
	new_dog->owner[owner_len] = '\0';
	/* initialize the age field */
	new_dog->age = age;
	return (new_dog);
}
