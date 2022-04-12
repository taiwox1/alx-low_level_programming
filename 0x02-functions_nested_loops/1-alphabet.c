#include "main.h"
/**
 * main - functions prints the alphabet. in lower case, followed by new line
 *
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
