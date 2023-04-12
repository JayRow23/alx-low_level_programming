#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
