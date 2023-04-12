#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int j, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int) * height);

	if (array == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array[j] = (int *) malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			free(array);
			for (k = 0; k <= j; k++)
				free(array[k]);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}
