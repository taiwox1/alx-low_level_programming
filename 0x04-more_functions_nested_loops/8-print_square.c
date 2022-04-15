#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int m = 0;
	int k;

	while (m < n && n > 0)
	{
		m = 0;
		while (k < n)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		m++;
	}
	if (m == 0)
		_putchar('\n');

}
