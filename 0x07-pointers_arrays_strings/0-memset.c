#include "main.h"

/**
 * _menset -fill memory with constant byte
 * @*s: destination
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s = &b;
	}

	return (s);
}
