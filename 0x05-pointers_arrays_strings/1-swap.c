#include "main.h"
/**
 * swap-int - function swap value of "a" and 'b'
 * @a: first parameter
 * @b: second parameter
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int initial;
	initial = *a;
	*b = *a;
	*a = initial;
}
