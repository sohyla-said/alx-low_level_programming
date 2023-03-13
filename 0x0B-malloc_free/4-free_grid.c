#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: an input
 * @height: an input
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free((int *)grid[i]);
	free(grid);
}
