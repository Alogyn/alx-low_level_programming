#include "main.h"

/*
 * Task 3. strcmp
 */

/**
  * _strcmp - Beginning/Starting point
  *
  * @s1: First string pointer or argument
  * @s2: Second string pointer or argument
  *
  * Objectif: Compare two strings
  *
  * Return: Result of comaparing the strings
  * 0: mean equal
  * > 0: mean 1 > s2
  * 0 <: mean s1 < s2
  */

int _strcmp(char *s1, char *s2)
{
	/* Result and loop variables declarations */
	int i = 0, result = 0;

	/* Comparing string loop */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			/* Break the while loop */
			break;
		}

		else
		{
			result = s1[i] - s2[i];
		}
		i++;
	}

	return (result);
}
