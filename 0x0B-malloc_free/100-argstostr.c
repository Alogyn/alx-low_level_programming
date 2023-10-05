#include "main.h"
#include <stdlib.h>

/*
 * Task (Advanced) 5. It isn't the mountains ahead to climb that wear you out;
 * it's the pebble in your shoe
 */

/**
  * argstostr - Concatenates all the arguments of your program
  *
  * @ac: First argument of count (int)
  * @av: Second argument of vector (char)
  *
  * Return: The pointer of new string
  */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i = 0, j = 0, k = 0, l;

	if (ac == 0)
		return (NULL);
	for (; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (;av[i][j] != '\0'; j++)
		{
			k++;
		}
		k++;
	}
	concat = malloc((k + 1) * sizeof(char));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	/* Initializing the variables */
	i = 0;
	j = 0;
	for (l = 0; l < k; l++)
	{
		if (av[i][j] == '\0')
		{
			concat[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < k - 1)
			concat[l] = av[i][j];
		j++;
	}
	concat[l] = '\0';
	return (concat);
}
