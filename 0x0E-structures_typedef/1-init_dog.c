#include "dog.h"

/*
 * Task 1. A dog is the only thing on earth that loves you more
 * than you love yourself
 */

/**
  * init_dog - Initialize a variable of type 'struct dog'
  *
  * @d: Pointer to the struct dog variable (struct)
  * @name: Pointer to the dog name (char)
  * @age: Pointer to the dog age (float)
  * @owner: Pointer to the dog owner (char)
  *
  * Return: None
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Checks if the the pointer 'd' is not empty */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
