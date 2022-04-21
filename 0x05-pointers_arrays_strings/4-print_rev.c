#include "main.h"
/**
 * _puts - print a stringin reverse followed by newline
 * @s: parameter
 * Return: Always void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
