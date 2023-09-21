#include "main.h"

/*
 * Task (Advanced) 11. It is the addition of strangeness to beauty that
 * constitutes the romantic character in art
 */

/**
  * infinite_add - Beginning/Starting point
  *
  * @n1: First number or argument
  * @n2: Second number or argument
  * @r: Result store
  * @size_r: Buffer size
  *
  * Objectif: Add two numbers
  *
  * Return: The result store
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* Variables declarations */
	int len1 = 0, len2 = 0, hold = 0, sum, i, j;

	/* Calculing length of 'n1' */
	while (n1[len1])
	{
		len1++;
	}

	/* Calculing length of 'n2' */
	while (n2[len2])
	{
		len2++;
	}
	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return (0);
	}
	r[size_r] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	size_r--;
	while (i >= 0 || j >= 0 || hold)
	{
		sum = hold;
		if (i >= 0)
		{
			sum += n1[i--] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j--] - '0';
		}
		hold = sum / 10;
		r[size_r--] = (sum % 10) + '0';
	}
	return (r + size_r + 1);
}
