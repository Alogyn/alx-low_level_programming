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
	int **grid, i, j;

	/* In case no input */
	if (width < 1 || height < 1)
		return (NULL);
	/* Memory for the dimesion height */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		/* Memory for the dimension width */
		grid[i] = malloc(width * sizeof(int));
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
	}
	/* Displaying the two dimesional array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
