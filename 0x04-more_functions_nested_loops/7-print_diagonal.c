#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \
 * Return:void
 */

void print_diagonal(int n)
{

	int m = 0;
	int j;

	while (m < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		m++;
	}
	if (m == 0)
		_putchar('\n');

}
