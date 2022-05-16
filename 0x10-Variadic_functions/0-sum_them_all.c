#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function sum all argument
 * @n: numbers of argument
 * Return: int;
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, add;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (i = n; i >= 0; i++)
	{
		add += va_arg(list, const unsigned int);
	}
	va_end(list);

	return (add);
}
