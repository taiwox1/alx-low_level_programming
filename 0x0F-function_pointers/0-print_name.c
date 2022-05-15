#include "function_pointers.h"
#include <stdio.h>

/**t
 * print_name - function print name
 * @name: character to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
