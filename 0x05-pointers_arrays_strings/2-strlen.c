#include "main.h"

/**
 * _strlen - return the lenght of a string;
 */

int _strlen(char *s)
{
	int a;
	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}
