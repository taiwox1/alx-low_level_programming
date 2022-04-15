#include "main.h"
/**
 * more_numbers - print  numbers 1 to 15
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n;
	int b;

	for (b = 0; b < 11; b++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
