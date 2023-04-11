#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid previously created by
 * my alloc_grid function
 * @grid: Grid created
 * @height: Parameter
 * Return: 0
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
