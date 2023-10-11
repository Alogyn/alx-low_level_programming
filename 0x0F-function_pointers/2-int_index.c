#include "function_pointers.h"

/*
 * Task 2. To hell with circumstances; I create opportunities
 */

/**
  * int_index - Searches for an integer
  *
  * @array: Input an array (int)
  * @size: Input size of an array (int)
  * @cmp: Pointer to the function (int)
  *
  * Return: '-1' if no elements matches, '-1' if 'size' is less than '0'
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* Loop variable declration */
	int i = 0;

	/* Checks if the 'array' and the 'cmp' are not empty */
	if (array != NULL && cmp != NULL)
	{
		/*  In case 'size' is less than '0' */
		if (size <= 0)
		{
			return (-1);
		}

		/* Loop that iterates over the elements of the array */
		while (i < size)
		{
			/* Checks if there is a matches */
			if (cmp(*(array + i)))
			{
				return (i);
			}
			i++;
		}
	}

	/* In case no elements matches */
	return (-1);
}
