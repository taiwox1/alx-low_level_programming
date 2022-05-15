#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function print name
 * @name: character to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
