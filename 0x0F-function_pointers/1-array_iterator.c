#include "function_pointers.h"

/*
 * Task 1. If you spend too much time thinking about a thing,
 * you'll never get it done
 */

/**
  * array_iterator - Executes a function given as a parameter
  * on each element of an array
  *
  * @array : Input an array (int)
  * @size: Input size of an array (structure size_t)
  * @action: Pointer to the function (void)
  *
  * Return: None
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Loop variable declaration */
	unsigned int i = 0;

	/* Checks if the 'array' and the 'size' are not empty */
	if (array != NULL && action != NULL)
	{
		/* Loop to run the function 'action' */
		while (i < size)
		{
			/* The function pointer */
			action(array[i]);
			i++;
		}
	}
}
