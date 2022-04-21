#include "main.h"
/**
 * swap_int - function swap value of "a" and 'b'
 * @a: first parameter
 * @b: second parameter
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int temp_1;
	int temp_2;
	
	temp_1 = *a;
	temp_2 = *b;
	*b = temp_1;
	*a = temp_2;
}
