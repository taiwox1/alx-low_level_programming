#include "main.h"
/**
 * print_most_numbers - print most numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int n;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
