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
	int **grid, i;

	grid = malloc(sizeof(int) * height);
	if (grid == 0 || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
	}
	return (grid);


}
