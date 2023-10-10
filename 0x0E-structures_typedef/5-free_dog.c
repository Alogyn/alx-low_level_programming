#include "dog.h"
#include <stdlib.h>

/*
 * Task 5. How many legs does a dog have if you call his tail a leg? Four.
 * Saying that a tail is a leg doesn't make it a leg
 */

/**
  * free_dog - Frees dogs
  *
  * @d: Pointer to the dog structure to be freed
  *
  * Return: None
  */

void free_dog(dog_t *d)
{
	/* Checks if the pointer is not empty */
	if (d != NULL)
	{
		/* Free the name and age strings */
		free(d->name);
		free(d->owner);

		/* Free the dog structure */
		free(d);
}
