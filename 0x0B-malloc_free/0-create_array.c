#include "main.h"
#include <stdlib.h>

/*
 * Task 0. Float like a butterfly, sting like a bee
 */

/**
  * create_array - Creates an array of chars,
  * and initializes it with a specific char
  *
  * @size: The size of Array (int)
  * @c: The storage character 'c' (char)
  *
  * Return: The pointer to the array, 'NULL' if size is '0'
  */

char *create_array(unsigned int size, char c)
{
	/* Pointer and loop variable declarations */
	char *create;
	unsigned int i = 0;

	/* In case the inpute size equal to '0' */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocates size bytes and returns a pointer to the allocated memory */
	create = malloc(size * sizeof(char));

	/* In case the allocation fail */
	if (create == NULL)
	{
		return (NULL);
	}

	/* In case the allocation success */
	while (i < size)
	{
		*(create + i) = c;
		i++;
	}

	return (create);
}
