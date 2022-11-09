#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid
 * @grid: multidiamensional array
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
