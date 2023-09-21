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
	int len1 = 0, len2 = 0, hold = 0, sum = 0, i, j, k;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 < len2)
		hold = len2;
	else
		hold = len1;
	if (hold + 1 > size_r)
		return (0);
	r[hold] = '\0';
	for (i = hold - 1; i >= 0; i--)
	{
		len1--;
		len2--;
		if (len1 >= 0)
			j = n1[len1] - '0';
		else
			j = 0;
		if (len2 >= 0)
			k = n2[len2] - '0';
		else
			k = 0;
		r[i] = (j + k + sum) % 10 + '0';
		sum = (j + k + sum) / 10;
	}
	if (sum == 1)
	{
		r[hold + 1] = '\0';
		if (hold + 2 > size_r)
			return (0);
		while (hold-- >= 0)
			r[hold + 1] = r[hold];
		r[0] = sum  + '0';
	}
	return (r);
}
