#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height: grid height
 *
 * Return: NULL on failiure or w or h <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
