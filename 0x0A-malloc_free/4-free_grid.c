#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: size of grid
 *
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		if (grid[i] != NULL)
			free(grid[i]);
	free(grid);
}
