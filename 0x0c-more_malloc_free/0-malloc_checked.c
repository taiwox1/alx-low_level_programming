#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - this function allocate memory using malloc
 * @b: stores the memory allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(sizeof(b));
	
	if (x == NULL)
		exit (98);
	return (x);
}
