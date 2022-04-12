#include "main.h"
/**
 * print_alphabet -prints the alphabet in lower case, followed by new line
 *print_alphabet
 * Return: Always return 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
