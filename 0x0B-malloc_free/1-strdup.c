#include "main.h"
#include <stdlib.h>

/*
 * Task 1. The woman who has no imagination has no wings
 */

/**
  * _strdup - Returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter
  *
  * @str: Input string (char)
  *
  * Return: The pointer to the duplicated string, NULL in case no string input
  */

char *_strdup(char *str)
{
	/* Pointer and loop variables decalrations */
	char *duplicate;
	unsigned int length = 1, i = 0;

	/* In case no string input */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Counting the length of string 'str' */
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}

	/* Memory for the new string */
	duplicate = malloc(length * sizeof(char));

	/* In case allocation fail */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Initializing the loop variable */
	i = 0;

	/* In case the allocation success */
	while (i < length - 1)
	{
		*(duplicate + i) = *(str + i);
		i++;
	}

	return (duplicate);
}
