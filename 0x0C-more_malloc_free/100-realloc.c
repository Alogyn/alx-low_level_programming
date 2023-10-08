#include "main.h"
#include <stdlib.h>

/*
 * Task (Advanced) 4. _realloc
 */

/**
  * _realloc - Reallocates a memory block using malloc and free
  *
  * @ptr: Input allocated pointer memory (void)
  * @new_size: The new size of Bytes to allocate memory (int)
  * @old_size: The old size of Bytes to allocate memory (int)
  *
  * Return: The pointer to new memory, NULL if fail,
  * 'ptr' if the new and old size are equal,
  * NULL if 'new_size' == '0' and 'ptr' != NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Pointer and variable declaration */
	char *new_ptr, *char_ptr;
	unsigned int i = 0;

	/* In case new and old size are equal */
	if (new_size == old_size)
		return (ptr);
	/* In case the pointer *ptr is NULL */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	/* In case new size is equal to '0' and the 'ptr' is NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* The memory allocation */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	/* Allocate to pointer memory */
	char_ptr = ptr;
	while (i < old_size)
	{
		*(new_ptr + i) = *(char_ptr + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
