#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
int **tx, i, j;
tx = malloc(sizeof(*tx) * height);

if (width <= 0 || height <= 0 || tab == 0)
	return (NULL);

else
{
	for (i = 0; i < height; i++)
	{
		tx[i] = malloc(sizeof(**tab) * width);
		if (tx[i] == 0)
		{
			while (i--)
				free(tx[i]);
			free(tx);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			tx[i][j] = 0;
	}
}

return (tx);
}
