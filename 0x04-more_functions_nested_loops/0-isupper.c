#include "main.h"
/**
 * check_upper - check the code.
 * @c: character to check
 * Return: 0 or 1.
 */
int check_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
