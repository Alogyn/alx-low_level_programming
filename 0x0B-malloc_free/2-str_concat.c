#include "main.h"
#include <stdlib.h>

/*
 * Task 2. He who is not courageous enough to take risks
 * will accomplish nothing in life
 */

/**
  * str_concat - Returns a pointer to a 2 dimensional array of integers
  *
  * @s1: Input first string (char)
  * @s2: Input second string (char)
  *
  * Return: The pointer of a newly allocated space in memory which contains,
  * NULL in case no string input
  */

char *str_concat(char *s1, char *s2)
{
	/* Pointer and loop variable declarations */
	char *concat;
	unsigned int i = 0, len1 = 1, len2 = 1;

	/* In case no string input */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Counting the length of 's1' and 's2' */
	while (*(s1 + i) != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		len2++;
		i++;
	}
	/* Memory for the new string */
	concat = malloc((len1 + len2) * sizeof(char));
	/* In case concatenation fail */
	if (concat == NULL)
		return (NULL);
	/* In case the allocation success */
	i = 0;
	while (i < (len1 + len2 - 2))
	{
		if (i < len1)
			*(concat + i) = *(s1 + i);
		else
			*(concat + i) = *(s2 + i);
		i++;
	}
	return (concat);
}
