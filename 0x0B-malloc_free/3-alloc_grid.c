#include "main.h"

/**
 * alloc_grid - check if c is upper
 *
 * @width: is var
 *
 * @height: is var
 *
 * Return: print follwed by line
*/

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(**grid) * height);
	if (grid == 0 || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width, sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
			free(grid[i]);
		free(grid);
		return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);


}
