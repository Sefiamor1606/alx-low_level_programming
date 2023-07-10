#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * my  alloc_grid function.
 * @grid: the grid to be freed
 * @height: dimension to be freed
 * Return: the freed dimension
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
