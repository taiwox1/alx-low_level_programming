#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * nrandom - return random numbers
 * Return: alway int
 */

int nrandom(void)
{
	int i, n;

	n = 5;
	for (i = 1; i < n; i++)
		return (rand() % 76);
}
