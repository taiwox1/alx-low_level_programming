#include "main.h"
/**
 * print_times_table - print the times table until n
 *
 * @n: n times table
 *
 * Return: No return
 */

void times_table(int n)
{
	int a,b,r;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if ( b < 0 || b > 15)
			{

			}
			else
			{
				r = a * b;
				_putchar(r);
			}
		}
		_putchar('\n');
	}
	return;
}

