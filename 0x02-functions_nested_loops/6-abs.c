#include "main.h"
#include <stdio.h>
/**
 * _abs - compute the absolute  value of an integer
 * @n: argument
 * Return: Always retunrn absolute interger
 * */
int _abs(int n)
{
	if ( n < 0)
	{
		return (n * -1);
	}
	return (n);
}
