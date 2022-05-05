#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2d array.
 * @width: int
 * @height: int
 * Return:  array
 */

int **alloc_grid(int width, int height)
{
	int **y, i, j;
	y = malloc(sizeof(*y) * height);
	if (width <= 0 || height <= 0 || y == 0)
	return (NULL);

else
{
	for (i = 0; i < height; i++)
	{
	
		y[i] = malloc(sizeof(**y) * width);
		if (y[i] == 0)
		{
			while (i--)
				free(y[i]);
			free(y);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			y[i][j] = 0;
	}
}
return (y);
}
