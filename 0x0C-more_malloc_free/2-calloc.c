#include "main.h"
#include <stdlib.h>

/*
 * Task 2. _calloc
 */

/**
  * _calloc - Allocates memory for an array of' nmemb' elements of 'size' bytes
  * each and returns a pointer to the allocated memory
  *
  * @nmemb: Input number of elements (int)
  * @size: Input  size of bytes (int)
  *
  * Return: The pointer to the allocated memory,
  * 'NULL' if 'nmemb' or 'seze' equal to '0',
  * 'NULL' if the allocation fail
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Pointer and loop variable declaration */
	char *memory;
	unsigned int i = 0;

	/* In case the arguments equal to '0' */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate the memory for an array */
	memory = malloc(nmemb * size);

	/* In case the allocation fail */
	if (memory == NULL)
	{
		return (NULL);
	}

	/* In case success */
	while (i < (nmemb * size))
	{
		*(memory + i) = 0;
		i++;
	}

	return (memory);
}
