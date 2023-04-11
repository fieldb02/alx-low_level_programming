#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - Writes a function that returns a pointer
 * to a 2D array of ints
 * @width: Array 1
 * @height: Array 2
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

