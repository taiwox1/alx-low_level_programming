#include "main.h"

/**
 * print_line - to prin straight line
 *
 * Return: 0;
 */

void print_line(int n)
{
	int c;
	int b;

	b = n;
	for (c = 0; c <= b ; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
