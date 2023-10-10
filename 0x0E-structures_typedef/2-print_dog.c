#include "dog.h"
#include <stdio.h>

/*
 * Task 2. A dog will teach you unconditional love.
 * If you can have that in your life, things won't be too bad
 */

/**
  * print_dog - Prints a 'struct dog'
  *
  * @d: Pointer to the struct dog variable
  *
  * Return: None
  */

void print_dog(struct dog *d)
{
	/* hecks if the pointer d is not NULL */
	if (d != NULL)
	{
		/* If the statement are NULL, print nil instead */
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
