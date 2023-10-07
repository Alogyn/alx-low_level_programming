#include "main.h"
#include <stdlib.h>

/*
 * Task 1. string_nconcat
 */

/**
  * string_nconcat - Concatenates two strings
  *
  * @s1: Input the first string (char)
  * @s2: Input the second string (char)
  * @n: Input the number of bytes (int)
  *
  * Return: The pointer to a newly allocated space in memory,
  * which contains 's1', followed by the first 'n' bytes of 's2',
  * NULL if the allocation fail,
  * entire string 's2' if 'n' is greater or equal to the length of  's2'
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Pointer and loop variables declarations */
	char *concat;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	/* In case Of empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculing the size of the string 's1' and 's2' */
	while (*(s1 + length1) != '\0')
		length1++;
	while (*(s2 + length2) != '\0')
		length2++;
	/* In case 'n' is bigger than 's2' size */
	if (n > length2)
		n = length2;
	/* Allocate the new memory */
	concat = malloc(sizeof(char) * (length1 + n + 1));
	/* In case allocation fail */
	if (concat == NULL)
		return (NULL);
	/* In case success */
	while (*(s1 + i) != '\0')
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < n && *(s2 + j) != '\n')
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}
	*(concat + i) = '\0';
	return (concat);
}
