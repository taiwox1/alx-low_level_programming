#include "main.h"
#include <stdio.h>
/**
 * times_table;
 *
 * Return: Always return void;
*/
void times_table(void)
{
	int x, y, m;
	
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			m x * y;
			if (x == 0)
			{
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
