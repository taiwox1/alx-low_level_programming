#include "main.h"

/**
 * print-alphabet_x10 - function is meant to print putchar , followed by a new line
 *
 * Return: Always return 0.
 */
void print_alphabet_x10(void)
{
	int a;
	int alp;

	for (a = 1; a <= 10; a++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
