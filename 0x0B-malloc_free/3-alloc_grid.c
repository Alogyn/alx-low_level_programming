#include "main.h"
#include <stdlib.h>

/*
 * Task 3. If you even dream of beating me you'd better wake up and apologize
 */

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers
  *
  * @width: Input dimension width (int)
  * @height: Input dimension height (int)
  *
  * Return: The pointer of 2 dimensional array of integers,
  * Null in case nothing inputed
  */

int **alloc_grid(int width, int height)
{
	/* Pointer and loop variables declarations */
	int **grid;
	int i = 0, j = 0;

	/* In case no input */
	if (width < 1 || height < 1)
		return (NULL);
	/* Memory for the dimesion height */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		/* Memory for the dimension width */
		grid[i] = malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
