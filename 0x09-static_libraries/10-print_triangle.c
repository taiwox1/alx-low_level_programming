#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int m = 1;
	int k;

	while (m <= size && size > 0)
	{
		k = 0;
		while (k < size - m)
		{
			_putchar(' ');
			k++;
		}
		k = 0;
		while (k < m)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		m++;
	}
	if (m == 1)
		_putchar('\n');
}
