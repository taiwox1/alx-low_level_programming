#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - this function allocate memory using malloc
 * @b: parameters
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);
}
