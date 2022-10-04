#include <stdlib.h>
#include "main.h"

/**
 * free_grid - funtion that returns a pointer to a 2 dimensional
 *  array of integers.
 *
 *  @grid: integer
 *  @height: integer
 *
 *  Return:
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
