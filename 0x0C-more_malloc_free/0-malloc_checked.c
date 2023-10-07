#include "main.h"
#include <stdlib.c>

/*
 * Task 0. Trust no one
 */

/**
  * malloc_checked - Allocates memory using malloc
  *
  * @b: The allocate memory (int)
  *
  * Return: The pointer to the allocated memory, 98 if the 'malloc' fail
  */

void *malloc_checked(unsigned int b)
{
	/* Pointer declaration */
	int *allocate;

	/* */
	allocate = malloc(b);

	/* In case the allocation to memory fail */
	if (allocate == NULL)
	{
		exit(98);
	}

	/* In case success */
	return (allocate);
}
