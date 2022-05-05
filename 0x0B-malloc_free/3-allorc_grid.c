#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ngrid;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	ngrid = malloc(height * sizeof(int *));
	if (ngrid == NULL)
	{
		free(ngrid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ngrid[x] = malloc(width * sizeof(int));
		if (ngrid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(ngrid[x]);
			free(ngrid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			ngrid[x][y] = 0;

	return (ngrid);
}
