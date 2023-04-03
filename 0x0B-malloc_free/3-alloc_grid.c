#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer variable
 * @height: integer variable
 * Return: NULL on failure,
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, s;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (s = 0; s < x; s++)
			{
				free(grid[s]);
			}
			free(grid);
			return (NULL);
		}
		for (s = 0; s < width; s++)
		{
			grid[x][s] = 0;
		}
	}
	return (grid);
}
