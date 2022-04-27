#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonal of square matrix
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
