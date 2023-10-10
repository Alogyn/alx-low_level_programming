#include "dog.h"
#include <stdlib.h>

/*
 * Task 4. A door is what a dog is perpetually on the wrong side of
 */

/**
  * new_dog - Creates a new dog
  *
  * @name: Pointer to the dog name (char)
  * @age: Pointer to the dog age (float)
  * @owner: Pointer to the dog owner (char)
  *
  * Return: None
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Pointer and loops variable declaration */
	dog_t *n_dog;
	unsigned int i, name_length, owner_length;

	/* In case empty 'name and 'owner' */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* Allocate memory for 'new_dog' */
	n_dog = malloc(sizeof(dog_t));
	/* In case allocation fail */
	if (n_dog == NULL)
		return (NULL);
	/* Store a copy of 'name' and 'owner' */
	for (name_length = 0 ; name[name_length]; name_length++)
		;
	n_dog->name = malloc(name_length * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		n_dog->name[i] = name[i];
	n_dog->age = age;
	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	n_dog->owner = malloc(owner_length * sizeof(char));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		n_dog->owner[i] = owner[i];
	return (n_dog);
}
