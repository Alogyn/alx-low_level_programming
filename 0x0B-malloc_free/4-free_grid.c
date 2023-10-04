#include "main.h"
#include <stdlib.h>

/*
 * Task 4. It's not bragging if you can back it up
 */

/**
  * free_grid - Free a 2 dimensional grid previously created
  * by your alloc_grid function
  *
  * @grid: Input the 'n' dimensionnal array (int)
  * @height: Input dimension height (int)
  *
  * Return:
  */

void free_grid(int **grid, int height)
{
	/* Loop variables declaration */
	int i = 0;

	/* Free the dimension 'grid' */
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
