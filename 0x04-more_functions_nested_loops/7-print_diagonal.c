#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \
 * Return:void
 */

void print_diagonal(int n)
{

	int m = 0;
	int k;

	while (m < n && n > 0)
	{
		k = 0;
		while (k < m)
		{
			_putchar(' ');
			k++;
		}

		_putchar('\\');
		_putchar('\n');
		m++;
	}
	if (m == 0)
		_putchar('\n');

}
