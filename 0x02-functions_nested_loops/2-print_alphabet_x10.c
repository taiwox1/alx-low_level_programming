#include "main.h"

/**
 * main - function is meant to print putchar , followed by a new line
 *
 * Return: Always return 0.
 */
void print_alphabet_x10(void)
{
	int a;
	int alp = 'a';
	for (a = 1; a <= 10; a++)
	{
		for ( char b = 'a'; b <= 'z'; b++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
