#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function sum all argument
 * @n: numbers of argument
 * Return: int;
 */

int sum_them_all(const unsigned int n, ...)
{
        va_list as;

        const unsigned int i;

        va_start(as, n);
        if (n == 0)
                return (0);
        for ( i = n; i >= 0; i = va_arg(as, int))
        {
                i += i;
                printf("%d", i);
        }
        va_end(ap);
}
~  
