#include "main.h"

/**
 * free_grid - check if c is upper
 *
 * @grid: is var
 *
 * @height: is var
 *
 * Return: print follwed by line
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
