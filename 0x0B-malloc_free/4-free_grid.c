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
	/* Free the dimension 'grid' */
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
