#include "main.h"
#include <stdlib.h>

/*
 * Task 3. array_range
 */

/**
  * array_range - Creates an array of integers contain all the values
  * from 'min' (included) to 'max' (included), ordered from 'min' to 'max'
  *
  * @min: Inpout the minimum integer (int)
  * @max: Input the maximum integer (int)
  *
  * Return: The pointer to the newly created array,
  * NULL if min > max, Null if fail
  */

int *array_range(int min, int max)
{
	/* Pointer and loop variable declaration */
	int *range;
	int i = 0;

	/* In case the 'min' is bigger than 'max' */
	if (min > max)
	{
		return (NULL);
	}

	/* The allocation of an array memory */
	range = malloc(sizeof(int) * (max - min + 1));

	/* In case the allocate memory fail */
	if (range == NULL)
	{
		return (NULL);
	}

	/* In case success */
	while (min <= max)
	{
		*(range + i) = min;
		min++;
		i++;
	}

	return (range);
}
