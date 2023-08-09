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

	grid = malloc(sizeof(int **) * height);
	if (grid == 0 || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int **));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(grid[j]);
		free(grid);
		return (NULL);
		}
	}
	return (grid);


}
