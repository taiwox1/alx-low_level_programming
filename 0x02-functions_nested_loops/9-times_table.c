#include "main.h"
#include <stdio.h>
/**
 * times_table;
 *
 * Return: Always return void;
*/
void times_table(void)
{
	int n;
	int m;
	int p;
	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = m * n;
			_putchar(p);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
