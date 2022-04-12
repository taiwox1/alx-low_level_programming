#include "main.h"
/**
 * main - functions prints the alphabet. in lower case, followed by new line
 *
 * Return: Always return 0.
 */

void  print_alphabet(void)
{

	for (int a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
		_putchar('\n');
	}

};
