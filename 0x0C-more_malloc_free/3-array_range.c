#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function create an array of integer
 * @min: minumum size
 * @max: maximum size
 * Return: thr pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int x;

	if (min > max)
		return (0);
	a  =  malloc((min * max) * sizeof(int));
	if (!a)
		return (NULL);
	x = min;
	while (i <= max - min)
		a[i++] = x++;
	return (a);
}
