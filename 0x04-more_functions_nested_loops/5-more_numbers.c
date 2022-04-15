#include "main.h"
/**
 * more_numbers - print  numbers 1 to 15
 *
 * Return:0
 */

void more_numbers(void)
{
	int n, m;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (n = 0; n <= 14; n++)
		{
			m = n;
			if (m > 9)
			{
				_putchar('1');
				m = n % 10;
			}
			_putchar('0' + m);
		}
		_putchar('\n');
	}
}
